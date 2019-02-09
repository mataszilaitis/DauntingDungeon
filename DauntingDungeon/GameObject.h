#pragma once
#include "Engine.h"

class GameObject {
public:
	GameObject(const char* textureName, SDL_Renderer* renderer, int x, int y);
	//~GameObject();

	void Update();
	void Render();

private:
	int xpos;
	int ypos;

	SDL_Texture *objTexture;
	SDL_Rect srcRect, destRect;
	SDL_Renderer *renderer;
};