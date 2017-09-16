#include "DogForward.h" 
#include "Graphics.h"

void DogForward::ClamptoScreen()
{
	if (x + 16 >= Graphics::ScreenWidth)
	{
		x = Graphics::ScreenWidth - 17;
	}
	if (x - 16 <= 0)
	{
		x = 17;
	}

	if (y - 15 <= 0)
	{
		y = 0 + 16;
	}
	if (y + 1 >= Graphics::ScreenHeight)
	{
		y = Graphics::ScreenHeight - 2;
	}
}

void DogForward::Update(const Keyboard & kbd)
{
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		x -= 1;
	}
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		x += 1;
	}


	if (kbd.KeyIsPressed(VK_UP))
	{
		y -= 1;
	}


	if (kbd.KeyIsPressed(VK_DOWN))
	{
		y += 1;
	}
}


float DogForward::GetX() const
{
	return x;
}

float DogForward::GetY() const
{
	return y;
}

float DogForward::GetHeight() const
{
	return Height;
}

void DogForward::Draw(Graphics & gfx) const
{
	const int x_int = int(x);
	const int y_int = int(y);

	gfx.PutPixel(x_int + 2, y_int, 43, 43, 43);
	gfx.PutPixel(x_int + 3, y_int, 43, 43, 43);
	gfx.PutPixel(x_int + 11, y_int, 43, 43, 43);
	gfx.PutPixel(x_int + 12, y_int, 43, 43, 43);

	gfx.PutPixel(x_int + 1, y_int - 1, 43, 43, 43);
	gfx.PutPixel(x_int + 2, y_int - 1, 156, 91, 25);
	gfx.PutPixel(x_int + 3, y_int - 1, 156, 91, 25);
	gfx.PutPixel(x_int + 4, y_int - 1, 43, 43, 43);
	gfx.PutPixel(x_int + 10, y_int - 1, 43, 43, 43);
	gfx.PutPixel(x_int + 11, y_int - 1, 156, 91, 25);
	gfx.PutPixel(x_int + 12, y_int - 1, 156, 91, 25);
	gfx.PutPixel(x_int + 13, y_int - 1, 43, 43, 43);

	gfx.PutPixel(x_int + 2, y_int - 2, 43, 43, 43);
	gfx.PutPixel(x_int + 3, y_int - 2, 166, 120, 71);
	gfx.PutPixel(x_int + 4, y_int - 2, 166, 120, 71);
	gfx.PutPixel(x_int + 5, y_int - 2, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 2, 43, 43, 43);
	gfx.PutPixel(x_int + 7, y_int - 2, 43, 43, 43);
	gfx.PutPixel(x_int + 8, y_int - 2, 43, 43, 43);
	gfx.PutPixel(x_int + 9, y_int - 2, 43, 43, 43);
	gfx.PutPixel(x_int + 10, y_int - 2, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 2, 166, 120, 71);
	gfx.PutPixel(x_int + 12, y_int - 2, 43, 43, 43);

	gfx.PutPixel(x_int + 3, y_int - 3, 43, 43, 43);
	gfx.PutPixel(x_int + 4, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 5, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 6, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 7, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 8, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 3, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 3, 43, 43, 43);

	gfx.PutPixel(x_int + 3, y_int - 4, 43, 43, 43);
	gfx.PutPixel(x_int + 4, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 5, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 6, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 7, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 8, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 4, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 4, 43, 43, 43);

	gfx.PutPixel(x_int + 2, y_int - 5, 43, 43, 43);
	gfx.PutPixel(x_int + 3, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 4, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 5, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 6, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 7, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 8, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 5, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 5, 43, 43, 43);

	gfx.PutPixel(x_int + 1, y_int - 6, 43, 43, 43);
	gfx.PutPixel(x_int + 2, y_int - 6, 156, 91, 25);
	gfx.PutPixel(x_int + 3, y_int - 6, 166, 120, 71);
	gfx.PutPixel(x_int + 4, y_int - 6, 43, 43, 43);
	gfx.PutPixel(x_int + 5, y_int - 6, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 6, 166, 120, 71);
	gfx.PutPixel(x_int + 7, y_int - 6, 166, 120, 71);
	gfx.PutPixel(x_int + 8, y_int - 6, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 6, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 6, 43, 43, 43);
	gfx.PutPixel(x_int + 11, y_int - 6, 43, 43, 43);

	gfx.PutPixel(x_int, y_int - 7, 43, 43, 43);
	gfx.PutPixel(x_int + 1, y_int - 7, 156, 91, 25);
	gfx.PutPixel(x_int + 2, y_int - 7, 156, 91, 25);
	gfx.PutPixel(x_int + 3, y_int - 7, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 7, 43, 43, 43);
	gfx.PutPixel(x_int + 7, y_int - 7, 166, 120, 71);
	gfx.PutPixel(x_int + 8, y_int - 7, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 7, 43, 43, 43);
	gfx.PutPixel(x_int + 10, y_int - 7, 253, 1, 0);
	gfx.PutPixel(x_int + 11, y_int - 7, 43, 43, 43);

	gfx.PutPixel(x_int, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 1, y_int - 8, 156, 91, 25);
	gfx.PutPixel(x_int + 2, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 5, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 7, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 8, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 9, y_int - 8, 253, 1, 0);
	gfx.PutPixel(x_int + 10, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 11, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 12, y_int - 8, 43, 43, 43);
	gfx.PutPixel(x_int + 13, y_int - 8, 43, 43, 43);

	gfx.PutPixel(x_int + 1, y_int - 9, 43, 43, 43);
	gfx.PutPixel(x_int + 5, y_int - 9, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 9, 156, 91, 25);
	gfx.PutPixel(x_int + 7, y_int - 9, 156, 91, 25);
	gfx.PutPixel(x_int + 8, y_int - 9, 156, 91, 25);
	gfx.PutPixel(x_int + 9, y_int - 9, 43, 43, 43);
	gfx.PutPixel(x_int + 10, y_int - 9, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 9, 166, 120, 71);
	gfx.PutPixel(x_int + 12, y_int - 9, 166, 120, 71);
	gfx.PutPixel(x_int + 13, y_int - 9, 166, 120, 71);
	gfx.PutPixel(x_int + 14, y_int - 9, 166, 120, 71);
	gfx.PutPixel(x_int + 15, y_int - 9, 43, 43, 43);

	gfx.PutPixel(x_int + 5, y_int - 10, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 10, 156, 91, 25);
	gfx.PutPixel(x_int + 7, y_int - 10, 156, 91, 25);
	gfx.PutPixel(x_int + 8, y_int - 10, 156, 91, 25);
	gfx.PutPixel(x_int + 9, y_int - 10, 43, 43, 43);
	gfx.PutPixel(x_int + 10, y_int - 10, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 10, 166, 120, 71);
	gfx.PutPixel(x_int + 12, y_int - 10, 166, 120, 71);
	gfx.PutPixel(x_int + 13, y_int - 10, 166, 120, 71);
	gfx.PutPixel(x_int + 14, y_int - 10, 166, 120, 71);
	gfx.PutPixel(x_int + 15, y_int - 10, 43, 43, 43);

	gfx.PutPixel(x_int + 5, y_int - 11, 43, 43, 43);
	gfx.PutPixel(x_int + 6, y_int - 11, 156, 91, 25);
	gfx.PutPixel(x_int + 7, y_int - 11, 156, 91, 25);
	gfx.PutPixel(x_int + 8, y_int - 11, 156, 91, 25);
	gfx.PutPixel(x_int + 9, y_int - 11, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 11, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 11, 43, 43, 43);
	gfx.PutPixel(x_int + 12, y_int - 11, 166, 120, 71);
	gfx.PutPixel(x_int + 13, y_int - 11, 166, 120, 71);
	gfx.PutPixel(x_int + 14, y_int - 11, 43, 43, 43);
	gfx.PutPixel(x_int + 15, y_int - 11, 156, 91, 25);
	gfx.PutPixel(x_int + 16, y_int - 11, 43, 43, 43);

	gfx.PutPixel(x_int + 6, y_int - 12, 43, 43, 43);
	gfx.PutPixel(x_int + 7, y_int - 12, 156, 91, 25);
	gfx.PutPixel(x_int + 8, y_int - 12, 156, 91, 25);
	gfx.PutPixel(x_int + 9, y_int - 12, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 12, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 12, 43, 43, 43);
	gfx.PutPixel(x_int + 12, y_int - 12, 166, 120, 71);
	gfx.PutPixel(x_int + 13, y_int - 12, 43, 43, 43);
	gfx.PutPixel(x_int + 15, y_int - 12, 43, 43, 43);

	gfx.PutPixel(x_int + 6, y_int - 13, 43, 43, 43);
	gfx.PutPixel(x_int + 7, y_int - 13, 166, 120, 71);
	gfx.PutPixel(x_int + 8, y_int - 13, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 13, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 13, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 13, 166, 120, 71);
	gfx.PutPixel(x_int + 12, y_int - 13, 166, 120, 71);
	gfx.PutPixel(x_int + 13, y_int - 13, 43, 43, 43);

	gfx.PutPixel(x_int + 7, y_int - 14, 43, 43, 43);
	gfx.PutPixel(x_int + 8, y_int - 14, 166, 120, 71);
	gfx.PutPixel(x_int + 9, y_int - 14, 166, 120, 71);
	gfx.PutPixel(x_int + 10, y_int - 14, 166, 120, 71);
	gfx.PutPixel(x_int + 11, y_int - 14, 166, 120, 71);
	gfx.PutPixel(x_int + 12, y_int - 14, 43, 43, 43);

	gfx.PutPixel(x_int + 8, y_int - 15, 43, 43, 43);
	gfx.PutPixel(x_int + 9, y_int - 15, 43, 43, 43);
	gfx.PutPixel(x_int + 10, y_int - 15, 43, 43, 43);
	gfx.PutPixel(x_int + 11, y_int - 15, 43, 43, 43);
}