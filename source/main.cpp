#include <iostream>
#include <string>
#include <3ds.h>
#include <graphics.h>
#include <audio.h>

int main() {
	// Initialize stuff
	romfsInit();
	gfxInitDefault();
	C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
	C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
	C2D_Prepare();

	// Create Render Targets
	//C3D_RenderTarget* topScreen = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
	C3D_RenderTarget* bottomScreen = C2D_CreateScreenTarget(GFX_BOTTOM, GFX_LEFT);

	// Load spriteSheet and crash the app if it's being found
	spriteSheet = C2D_SpriteSheetLoad("romfs:/gfx/sprites.t3x");
	if (!spriteSheet) svcBreak(USERBREAK_PANIC);

	// Main Loop
	while(aptMainLoop) {
		// Allow inputs
		hidScanInput();

		// Initialize sprites
		initSprite(1, 0, 0);

		C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
		//C2D_TargetClear(topScreen, C2D_Color32f(0.0f, 0.0f, 0.0f, 1.0f));
		C2D_TargetClear(bottomScreen, C2D_Color32f(0.0f, 0.0f, 0.0f, 1.0f));
		// C2D_SceneBegin(topScreen);
		C2D_SceneBegin(bottomScreen);
		// Insert functions here
		C2D_DrawSprite(&sprites[1].sprite);
		C3D_FrameEnd(0);
	};

	// Kil...I mean free the spriteSheet
	C2D_SpriteSheetFree(spriteSheet);

	// Deinitialize stuff
	C2D_Fini();
	C3D_Fini();
	gfxExit();
	romfsExit();
};
