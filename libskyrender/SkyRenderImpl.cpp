#include "SkyRenderImpl.h"

SkyRenderImpl::SkyRenderImpl()
{
	SDL_Init(SDL_INIT_EVERYTHING);
}

SkyRenderImpl::~SkyRenderImpl()
{
}

void SkyRenderImpl::CreateWindow(int width, int height)
{
	screen_ = SDL_CreateWindow("SDL Video", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
}

void SkyRenderImpl::CreateWindow(void *hwnd)
{
	screen_ = SDL_CreateWindowFrom(hwnd);
}