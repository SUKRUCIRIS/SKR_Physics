#include <SDL.h>
#include <time.h>
#include <SKR_Physics.h>

SDL_FRect* SKRtoSDL(SKR_Rect* src, SDL_FRect* des) {//a helper function to use SDL with SKR_Physics
	des->x = src->x;
	des->y = src->y;
	des->w = src->w;
	des->h = src->h;
	return des;
}

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
	SDL_DisplayMode screen;
	SDL_GetDesktopDisplayMode(0, &screen);
	SDL_Window* gamewindow;
	SDL_Renderer* gamerenderer;
	gamewindow = SDL_CreateWindow((char*)u8"ÞÜKRÜ ÇÝRÝÞ ENGINE", 0, 0, screen.w, screen.h, SDL_WINDOW_SHOWN | SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_BORDERLESS);
	gamerenderer = SDL_CreateRenderer(gamewindow, -1, render_flags);
	SDL_RenderSetLogicalSize(gamerenderer, 1920, 1080);


	SKR_World* world = SKR_CreateWorld(9.81f, 0.2f, SKR_ISOMETRIC);

	SKR_Rect ground1;
	ground1.x = 100;
	ground1.y = 800;
	ground1.w = 1720;
	ground1.h = 100;
	SKR_StaticRect* ground1x = SKR_CreateStaticRect(world, &ground1);

	SKR_Rect ground2;
	ground2.x = 20;
	ground2.y = 0;
	ground2.w = 20;
	ground2.h = 1080;
	SKR_StaticRect* ground2x = SKR_CreateStaticRect(world, &ground2);

	SKR_Rect ground3;
	ground3.x = 0;
	ground3.y = 20;
	ground3.w = 1920;
	ground3.h = 20;
	SKR_StaticRect* ground3x = SKR_CreateStaticRect(world, &ground3);

	SKR_Rect ground4;
	ground4.x = 0;
	ground4.y = 1040;
	ground4.w = 1920;
	ground4.h = 20;
	SKR_StaticRect* ground4x = SKR_CreateStaticRect(world, &ground4);

	SKR_Rect ground5;
	ground5.x = 1880;
	ground5.y = 0;
	ground5.w = 20;
	ground5.h = 1080;
	SKR_StaticRect* ground5x = SKR_CreateStaticRect(world, &ground5);

	SKR_Rect ground6;
	ground6.x = 600;
	ground6.y = 600;
	ground6.w = 10;
	ground6.h = 200;
	SKR_StaticRect* ground6x = SKR_CreateStaticRect(world, &ground6);

	SKR_Rect ground7;
	ground7.x = 1500;
	ground7.y = 700;
	ground7.w = 5;
	ground7.h = 5;
	SKR_StaticRect* ground7x = SKR_CreateStaticRect(world, &ground7);

	SKR_Rect ground8;
	ground8.x = 1300;
	ground8.y = 600;
	ground8.w = 5;
	ground8.h = 5;
	SKR_StaticRect* ground8x = SKR_CreateStaticRect(world, &ground8);

	SKR_Rect ground9;
	ground9.x = 1000;
	ground9.y = 500;
	ground9.w = 100;
	ground9.h = 50;
	SKR_StaticRect* ground9x = SKR_CreateStaticRect(world, &ground9);

	SKR_Rect kine1;
	kine1.x = 1600;
	kine1.y = 500;
	kine1.w = 200;
	kine1.h = 55;
	SKR_KinematicRect* kine1x = SKR_CreateKinematicRect(world, &kine1);

	SKR_Rect ground10;
	ground10.x = 960;
	ground10.y = 270;
	ground10.w = 20;
	ground10.h = 50;
	SKR_StaticRect* ground10x = SKR_CreateStaticRect(world, &ground10);

	SKR_Rect ground11;
	ground11.x = 920;
	ground11.y = 270;
	ground11.w = 20;
	ground11.h = 50;
	SKR_StaticRect* ground11x = SKR_CreateStaticRect(world, &ground11);

	SKR_Rect ground12;
	ground12.x = 880;
	ground12.y = 270;
	ground12.w = 20;
	ground12.h = 50;
	SKR_StaticRect* ground12x = SKR_CreateStaticRect(world, &ground12);

	SKR_Rect ground13;
	ground13.x = 810;
	ground13.y = 270;
	ground13.w = 50;
	ground13.h = 50;
	SKR_StaticRect* ground13x = SKR_CreateStaticRect(world, &ground13);

	SKR_Rect ground14;
	ground14.x = 740;
	ground14.y = 270;
	ground14.w = 50;
	ground14.h = 50;
	SKR_StaticRect* ground14x = SKR_CreateStaticRect(world, &ground14);

	SKR_Rect ground15;
	ground15.x = 670;
	ground15.y = 270;
	ground15.w = 50;
	ground15.h = 50;
	SKR_StaticRect* ground15x = SKR_CreateStaticRect(world, &ground15);

	SKR_Rect ground16;
	ground16.x = 170;
	ground16.y = 600;
	ground16.w = 10;
	ground16.h = 200;
	SKR_StaticRect* ground16x = SKR_CreateStaticRect(world, &ground16);

	SKR_Rect character;
	character.x = 800;
	character.y = 300;
	character.w = 50;
	character.h = 50;
	SKR_DynamicRect* chx = SKR_CreateDynamicRect(world, &character, 79.9f, 0.3f, 2);

	SKR_Rect obje;
	obje.x = 310;
	obje.y = 300;
	obje.w = 50;
	obje.h = 50;
	SKR_DynamicRect* objex = SKR_CreateDynamicRect(world, &obje, 50.2f, 0.5f, 2);

	SKR_Rect obje2;
	obje2.x = 330;
	obje2.y = 200;
	obje2.w = 50;
	obje2.h = 50;
	SKR_DynamicRect* obje2x = SKR_CreateDynamicRect(world, &obje2, 50.2f, 0.5f, 2);

	SKR_Rect obje3;
	obje3.x = 680;
	obje3.y = 400;
	obje3.w = 100;
	obje3.h = 100;
	SKR_DynamicRect* obje3x = SKR_CreateDynamicRect(world, &obje3, 250.5f, 0.5f, 2);


	SDL_FRect transformer;

	SDL_FRect bg;
	bg.x = 0;
	bg.y = 0;
	bg.w = 1920;
	bg.h = 1080;
	int up = 0, down = 0, left = 0, right = 0;
	clock_t time;
	SDL_Event event;
	while (1) {

		time = clock();

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT || (event.key.repeat == 0 && event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)) {
				SKR_DestroyWorld(world);
				SDL_DestroyRenderer(gamerenderer);
				SDL_DestroyWindow(gamewindow);
				SDL_Quit();
				return 0;
			}
			if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_a) {
				left = 1;
			}
			if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_d) {
				right = 1;
			}
			if (event.key.repeat == 0 && event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_a) {
				left = -1;
			}
			if (event.key.repeat == 0 && event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_d) {
				right = -1;
			}
			if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_w) {
				up = 1;
			}
			if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_s) {
				down = 1;
			}
			if (event.key.repeat == 0 && event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_w) {
				up = -1;
			}
			if (event.key.repeat == 0 && event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_s) {
				down = -1;
			}
		}

		if (up == 1 && down != 1) {
			SKR_SetYVelocityDynamicRect(chx, SKR_GetYVelocityDynamicRect(chx) - 0.35f);
			if (SKR_GetYVelocityDynamicRect(chx) < -6.5f) {
				SKR_SetYVelocityDynamicRect(chx, -6.5f);
			}
		}
		if (down == 1 && up != 1) {
			SKR_SetYVelocityDynamicRect(chx, SKR_GetYVelocityDynamicRect(chx) + 0.35f);
			if (SKR_GetYVelocityDynamicRect(chx) > 6.5f) {
				SKR_SetYVelocityDynamicRect(chx, 6.5f);
			}
		}
		if (down == 1 && up == 1) {
			SKR_SetYVelocityDynamicRect(chx, 0);
		}
		if (down == -1) {
			if (SKR_GetYVelocityDynamicRect(chx) > 0) {
				SKR_SetYVelocityDynamicRect(chx, 0);
			}
			down = 0;
		}
		if (up == -1) {
			if (SKR_GetYVelocityDynamicRect(chx) < 0) {
				SKR_SetYVelocityDynamicRect(chx, 0);
			}
			up = 0;
		}
		if (right == 1 && left != 1) {
			SKR_SetXVelocityDynamicRect(chx, SKR_GetXVelocityDynamicRect(chx) + 0.35f);
			if (SKR_GetXVelocityDynamicRect(chx) > 6.5f) {
				SKR_SetXVelocityDynamicRect(chx, 6.5f);
			}
		}
		if (left == 1 && right != 1) {
			SKR_SetXVelocityDynamicRect(chx, SKR_GetXVelocityDynamicRect(chx) - 0.35f);
			if (SKR_GetXVelocityDynamicRect(chx) < -6.5f) {
				SKR_SetXVelocityDynamicRect(chx, -6.5f);
			}
		}
		if (right == 1 && left == 1) {
			SKR_SetXVelocityDynamicRect(chx, 0);
		}
		if (right == -1) {
			if (SKR_GetXVelocityDynamicRect(chx) > 0) {
				SKR_SetXVelocityDynamicRect(chx, 0);
			}
			right = 0;
		}
		if (left == -1) {
			if (SKR_GetXVelocityDynamicRect(chx) < 0) {
				SKR_SetXVelocityDynamicRect(chx, 0);
			}
			left = 0;
		}

		SDL_RenderClear(gamerenderer);
		SDL_SetRenderDrawColor(gamerenderer, 70, 100, 50, 255);
		SDL_RenderFillRectF(gamerenderer, &bg);
		SDL_SetRenderDrawColor(gamerenderer, 50, 50, 50, 255);
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&character, &transformer));
		SDL_SetRenderDrawColor(gamerenderer, 100, 50, 70, 255);
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground1, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground2, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground3, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground4, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground5, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground6, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground7, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground8, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground9, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&kine1, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground10, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground11, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground12, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground13, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground14, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground15, &transformer));
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&ground16, &transformer));
		SDL_SetRenderDrawColor(gamerenderer, 31, 69, 31, 255);
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&obje, &transformer));
		SDL_SetRenderDrawColor(gamerenderer, 69, 31, 31, 255);
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&obje2, &transformer));
		SDL_SetRenderDrawColor(gamerenderer, 31, 31, 69, 255);
		SDL_RenderFillRectF(gamerenderer, SKRtoSDL(&obje3, &transformer));
		SDL_RenderPresent(gamerenderer);

		SKR_AnimateKinematicRect(kine1x, 1600, 500, 1000, 200, 1.5f);

		SKR_SimulateWorld(world, 15);

		while (clock() < (time + 15));
	}
}