#pragma once

#ifdef LIBSKYRENDER_EXPORTS
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

class DLL_EXPORT SkyRenderSdk
{
public:
	SkyRenderSdk();
	~SkyRenderSdk();
};

