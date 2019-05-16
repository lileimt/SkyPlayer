#pragma once
#include "SkyRenderSdk.h"

extern "C"
{
	#include "SDL.h"
}

class SkyRenderImpl : public SkyRenderSdk
{
public:
	SkyRenderImpl();
	~SkyRenderImpl();

	void CreateWindow(int width, int height);
	void CreateWindow(void *hwnd);

private:
	SDL_Window *screen_;
};

