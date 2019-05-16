// libskyrendertest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#define SDL_MAIN_HANDLED

extern "C" {
#include "SDL.h"
#include "SDL_main.h"
}

int screen_w = 500, screen_h = 500;
const int pixel_w = 320, pixel_h = 180;

int main()
{
    //std::cout << "Hello World!\n"; 
	SDL_Init(SDL_INIT_VIDEO);
	
	SDL_Window *screen_ = SDL_CreateWindow("SKY SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_w, screen_h, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
	SDL_Renderer *render_ = SDL_CreateRenderer(screen_, -1, SDL_RENDERER_ACCELERATED);

	SDL_Texture *texture_ = SDL_CreateTexture(render_, SDL_PIXELFORMAT_UNKNOWN, SDL_TEXTUREACCESS_STREAMING, pixel_w, pixel_h);

	SDL_Event event;
	while (1) {
		SDL_WaitEvent(&event);
	 }
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
