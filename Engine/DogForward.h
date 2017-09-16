#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class DogForward
{
public:
	void ClamptoScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Keyboard& kbd);
	float GetX() const;
	float GetY() const;
	float GetHeight() const;
private:
	float x = 400.0f;
	float y = 300.0f;
	float Width = 16.0f;
	float Height = 15.0f;
};