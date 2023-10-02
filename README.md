<h1 align="center"><br><img src="https://cdn.discordapp.com/attachments/1102974988346208327/1150783804420669552/Untitled215_20230604144110.png" height="200" width="400"><br><b>DSShop Client</b></h1>
<p align="center">A client for downloading DS games from the DSShop server.<br>
Available for (New)3DS/2DS(XL).</p>

<h1 align="center"><b>Info</b></h1>
<p align="center">This is the DSShop Client you will install on your 3DS through FBI.<br>
With that comes also a complete open source repository for interested people.<br>
For the download click this link https://github.com/DSShop/DSShop-Client/releases. </p>

<h1 align="center"><b>Installation</b></h1>
<p align="center">Either download DSShop from GitHub or scan the QR Code found on the website/Discord Server or GitHub.<br>
When downloading the .cia file from GitHub, insert your (micro)SD Card into a device which can read and write to it.<br>
Afterwards put the .cia file into cias folder(if you don't have one, create one) also make sure to have FBI installed on your 3DS.<br>
Finally insert your (micro)SD Card back into your 3DS, open FBI, go to SD, then cias, select DSShop.cia press A and then press A again.<br>
Alternatively you can scan the QR by opening FBI and selecting "Remote Install".</p>

<h1 align="center"><b>Compiling Info</b></h1>
<p align="center">For compiling the DSShop Client on Windows you will need to install https://devkitpro.org/.<br>
Make sure you pick 3DS Development when using the graphical installer on Windows.<br>
If you're on Windows go to C:\devkitPro\msys2, then open msys2.exe, write `pacman -Sys curl` and then `pacman -Sy 3ds-curl`.<br>
Go back to your DSShop directory.<br>
Open Command Prompt and type "cd [DSShop directory]" then type "make".<br>
If you want to clear the directory to for example recompile the code due to self-made changes make sure that CMD is set to the DSShop directory and type in "make clean".<br>
Now you have the .3dsx version of the DSShop.<br>
For .cia compilation is makerom required.</p>

<h1 align="center"><b>Credits</b></h1>
<p align="center">DSShop Team for the development, devkitPro for the devkitARM toolchains and 3DS libraries and Nintendo(not affiliated with this project).</p>
