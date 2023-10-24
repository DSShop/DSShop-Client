// Include guards
#ifndef DSSHOP_GRAPHICS_HEADER_H
#define DSSHOP_GRAPHICS_HEADER_H
#pragma once

// Standard Includes + Citro2D and Citro3D
#include <iostream> 
#include <string>
#include <citro2d.h>
#include <citro3d.h>

// Define the maximum amount of sprites
#define MAX_SPRITES 4

// That's a sprite
typedef struct {
    C2D_Sprite sprite;
} Sprite;

// Creating spriteSheet object and Sprite array
static C2D_SpriteSheet spriteSheet;
static Sprite sprites[MAX_SPRITES];

void initSprite(int spriteIndex, int x, int y) {
    Sprite* spriteSelect = &sprites[spriteIndex]; // Select sprite to render

    C2D_SpriteFromSheet(&spriteSelect->sprite, spriteSheet, spriteIndex); // Renders sprite from spriteSheet
    C2D_SpriteSetPos(&spriteSelect->sprite, x, y); // Sets the position of the sprite to the center
};
#endif
