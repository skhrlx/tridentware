#pragma once
#include <Windows.h>
#include "../Offsets/offsets.hpp"
#include "../Offsets/client.dll.hpp"

HWND Entryhwnd = NULL;
int processid = 0;
RECT Rect;

ULONG64 client = 0;
uintptr_t global_pawn = 0;

namespace Settings
{
    bool bMenu = true;
    bool bAimbot = true;
    bool bVisuals = true;
    bool bMisc = true;
    bool bConfig = true;
    namespace aimbot 
    {
        bool aimbot = false;
        inline float aim_fov = 50.0f;
        inline float smooth = 10.0f;
        inline float trigger_delay = 1.0f;
        bool fov_circle = false;
        bool crosshair = true;
        int crosshair_size = 2;
        bool triggerbot = true;
        inline  int selectedhitbox = 0;
        inline  const char* hitbox[] = { ("head") ,("neck"), ("cock") };



    };
    namespace rage_aimbot {

    }
    namespace Visuals
    {
        int boxMode = 0;
         bool bSnaplines = false;
         bool bDistance = false;
         bool bBox = false;
         bool bHealth = true;
         bool headcircle = false;
         bool bones = true;
         bool distance = false;
         bool armor = false;
         bool names = false;

         bool box = true;
         inline  int healthtype = 1;
         inline  const char* healtht[] = { ("text") ,("bar"), ("both") };

         static const char* boxStyle[] =
         {
             "off",
             "box",
             "corner",
             "filled",
         };

         float BoxWidth = 1.0f;
    }
    namespace misc {
        bool bhop = true;
        bool save_fps = false;
        bool water = false;
    }
}

