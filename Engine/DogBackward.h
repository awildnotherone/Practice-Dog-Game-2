#pragma once
#include "Graphics.h" 
#include "Keyboard.h"

class DogBackward
{
public:
	void ClamptoScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Keyboard& kbd);
	int GetX() const;
	int GetY() const;
	int GetHeight() const;
private:
	int x = 399;
	int y = 299;
	int Width = 16;
	int Height = 15;
};