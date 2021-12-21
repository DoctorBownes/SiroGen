#pragma once
#include <SiroGen/color.h>
#include <SiroGen/sprite.h>
class PixelSprite : public Sprite
{
public:
	void AddSprite(char canvas[], char width, char height);
private:
	std::vector<char>* pixelCanvas;
	//std::vector<char>* pixelCanvas;
};

