#include "DogBackward.h"
#include "Graphics.h"

void DogBackward::ClamptoScreen()
{
	if (x - 16 <= 0)
	{
		x = 17;
	}
	if (x >= Graphics::ScreenWidth)
	{
		x = Graphics::ScreenWidth - 1;
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

void DogBackward::Draw(Graphics & gfx) const
{
	gfx.PutPixel(x - 2, y, 43, 43, 43);
	gfx.PutPixel(x - 3, y, 43, 43, 43);
	gfx.PutPixel(x - 11, y, 43, 43, 43);
	gfx.PutPixel(x - 12, y, 43, 43, 43);

	gfx.PutPixel(x - 1, y - 1, 43, 43, 43);
	gfx.PutPixel(x - 2, y - 1, 156, 91, 25);
	gfx.PutPixel(x - 3, y - 1, 156, 91, 25);
	gfx.PutPixel(x - 4, y - 1, 43, 43, 43);
	gfx.PutPixel(x - 10, y - 1, 43, 43, 43);
	gfx.PutPixel(x - 11, y - 1, 156, 91, 25);
	gfx.PutPixel(x - 12, y - 1, 156, 91, 25);
	gfx.PutPixel(x - 13, y - 1, 43, 43, 43);

	gfx.PutPixel(x - 2, y - 2, 43, 43, 43);
	gfx.PutPixel(x - 3, y - 2, 166, 120, 71);
	gfx.PutPixel(x - 4, y - 2, 166, 120, 71);
	gfx.PutPixel(x - 5, y - 2, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 2, 43, 43, 43);
	gfx.PutPixel(x - 7, y - 2, 43, 43, 43);
	gfx.PutPixel(x - 8, y - 2, 43, 43, 43);
	gfx.PutPixel(x - 9, y - 2, 43, 43, 43);
	gfx.PutPixel(x - 10, y - 2, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 2, 166, 120, 71);
	gfx.PutPixel(x - 12, y - 2, 43, 43, 43);

	gfx.PutPixel(x - 3, y - 3, 43, 43, 43);
	gfx.PutPixel(x - 4, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 5, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 6, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 7, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 8, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 3, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 3, 43, 43, 43);

	gfx.PutPixel(x - 3, y - 4, 43, 43, 43);
	gfx.PutPixel(x - 4, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 5, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 6, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 7, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 8, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 4, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 4, 43, 43, 43);

	gfx.PutPixel(x - 2, y - 5, 43, 43, 43);
	gfx.PutPixel(x - 3, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 4, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 5, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 6, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 7, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 8, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 5, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 5, 43, 43, 43);

	gfx.PutPixel(x - 1, y - 6, 43, 43, 43);
	gfx.PutPixel(x - 2, y - 6, 156, 91, 25);
	gfx.PutPixel(x - 3, y - 6, 166, 120, 71);
	gfx.PutPixel(x - 4, y - 6, 43, 43, 43);
	gfx.PutPixel(x - 5, y - 6, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 6, 166, 120, 71);
	gfx.PutPixel(x - 7, y - 6, 166, 120, 71);
	gfx.PutPixel(x - 8, y - 6, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 6, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 6, 43, 43, 43);
	gfx.PutPixel(x - 11, y - 6, 43, 43, 43);

	gfx.PutPixel(x, y - 7, 43, 43, 43);
	gfx.PutPixel(x - 1, y - 7, 156, 91, 25);
	gfx.PutPixel(x - 2, y - 7, 156, 91, 25);
	gfx.PutPixel(x - 3, y - 7, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 7, 43, 43, 43);
	gfx.PutPixel(x - 7, y - 7, 166, 120, 71);
	gfx.PutPixel(x - 8, y - 7, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 7, 43, 43, 43);
	gfx.PutPixel(x - 10, y - 7, 253, 1, 0);
	gfx.PutPixel(x - 11, y - 7, 43, 43, 43);

	gfx.PutPixel(x, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 1, y - 8, 156, 91, 25);
	gfx.PutPixel(x - 2, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 5, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 7, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 8, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 9, y - 8, 253, 1, 0);
	gfx.PutPixel(x - 10, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 11, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 12, y - 8, 43, 43, 43);
	gfx.PutPixel(x - 13, y - 8, 43, 43, 43);

	gfx.PutPixel(x - 1, y - 9, 43, 43, 43);
	gfx.PutPixel(x - 5, y - 9, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 9, 156, 91, 25);
	gfx.PutPixel(x - 7, y - 9, 156, 91, 25);
	gfx.PutPixel(x - 8, y - 9, 156, 91, 25);
	gfx.PutPixel(x - 9, y - 9, 43, 43, 43);
	gfx.PutPixel(x - 10, y - 9, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 9, 166, 120, 71);
	gfx.PutPixel(x - 12, y - 9, 166, 120, 71);
	gfx.PutPixel(x - 13, y - 9, 166, 120, 71);
	gfx.PutPixel(x - 14, y - 9, 166, 120, 71);
	gfx.PutPixel(x - 15, y - 9, 43, 43, 43);

	gfx.PutPixel(x - 5, y - 10, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 10, 156, 91, 25);
	gfx.PutPixel(x - 7, y - 10, 156, 91, 25);
	gfx.PutPixel(x - 8, y - 10, 156, 91, 25);
	gfx.PutPixel(x - 9, y - 10, 43, 43, 43);
	gfx.PutPixel(x - 10, y - 10, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 10, 166, 120, 71);
	gfx.PutPixel(x - 12, y - 10, 166, 120, 71);
	gfx.PutPixel(x - 13, y - 10, 166, 120, 71);
	gfx.PutPixel(x - 14, y - 10, 166, 120, 71);
	gfx.PutPixel(x - 15, y - 10, 43, 43, 43);

	gfx.PutPixel(x - 5, y - 11, 43, 43, 43);
	gfx.PutPixel(x - 6, y - 11, 156, 91, 25);
	gfx.PutPixel(x - 7, y - 11, 156, 91, 25);
	gfx.PutPixel(x - 8, y - 11, 156, 91, 25);
	gfx.PutPixel(x - 9, y - 11, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 11, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 11, 43, 43, 43);
	gfx.PutPixel(x - 12, y - 11, 166, 120, 71);
	gfx.PutPixel(x - 13, y - 11, 166, 120, 71);
	gfx.PutPixel(x - 14, y - 11, 43, 43, 43);
	gfx.PutPixel(x - 15, y - 11, 156, 91, 25);
	gfx.PutPixel(x - 16, y - 11, 43, 43, 43);

	gfx.PutPixel(x - 6, y - 12, 43, 43, 43);
	gfx.PutPixel(x - 7, y - 12, 156, 91, 25);
	gfx.PutPixel(x - 8, y - 12, 156, 91, 25);
	gfx.PutPixel(x - 9, y - 12, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 12, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 12, 43, 43, 43);
	gfx.PutPixel(x - 12, y - 12, 166, 120, 71);
	gfx.PutPixel(x - 13, y - 12, 43, 43, 43);
	gfx.PutPixel(x - 15, y - 12, 43, 43, 43);

	gfx.PutPixel(x - 6, y - 13, 43, 43, 43);
	gfx.PutPixel(x - 7, y - 13, 166, 120, 71);
	gfx.PutPixel(x - 8, y - 13, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 13, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 13, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 13, 166, 120, 71);
	gfx.PutPixel(x - 12, y - 13, 166, 120, 71);
	gfx.PutPixel(x - 13, y - 13, 43, 43, 43);

	gfx.PutPixel(x - 7, y - 14, 43, 43, 43);
	gfx.PutPixel(x - 8, y - 14, 166, 120, 71);
	gfx.PutPixel(x - 9, y - 14, 166, 120, 71);
	gfx.PutPixel(x - 10, y - 14, 166, 120, 71);
	gfx.PutPixel(x - 11, y - 14, 166, 120, 71);
	gfx.PutPixel(x - 12, y - 14, 43, 43, 43);

	gfx.PutPixel(x - 8, y - 15, 43, 43, 43);
	gfx.PutPixel(x - 9, y - 15, 43, 43, 43);
	gfx.PutPixel(x - 10, y - 15, 43, 43, 43);
	gfx.PutPixel(x - 11, y - 15, 43, 43, 43);
}

void DogBackward::Update(const Keyboard & kbd)
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

int DogBackward::GetX() const
{
	return x;
}

int DogBackward::GetY() const
{
	return y;
}

int DogBackward::GetHeight() const
{
	return Height;
}
