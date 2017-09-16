#pragma once
#include "Graphics.h" 
#include "Keyboard.h"

class DogBackward
{
public:
	void ClamptoScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Keyboard& kbd);
	float GetX() const;
	float GetY() const;
	float GetHeight() const;
private:
	float x = 399.0f;
	float y = 299.0f;
	float Width = 16.0f;
	float Height = 15.0f;
};