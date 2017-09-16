#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class DogForward
{
public:
	void ClamptoScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Keyboard& kbd);
	int GetX() const;
	int GetY() const;
	int GetHeight() const;
private:
	int x = 400;
	int y = 300;
	int Width = 16;
	int Height = 15;
};