﻿#include "framework.h"
#include "Renderer.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    Renderer* dx = new Renderer;
    dx->Init(hInstance);
    dx->Run();
    dx->Final();
    return 0;
}
