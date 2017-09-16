#include "Bone.h"

void Bone::Init(int in_x, int in_y)
{ 
	x = in_x; 
	y = in_y; 
}

void Bone::Update()
{

}

void Bone::ProcessConsumptionForward(const DogForward& dogf)
{
	int fright = dogf.GetX() + 16;
	int fleft = dogf.GetX() + 9;
	int ftop = dogf.GetY() - dogf.GetHeight();
	int fbottom = dogf.GetY();
	int tright = x + Width;
	int tleft = x;
	int ttop = y - Height;
	int tbottom = y;

	if (
		fleft <= tright&&
		fright >= tleft&&
		ftop <= tbottom&&
		fbottom >= ttop
		)
	{
		isEaten = true;
	}
}

void Bone::ProcessConsumptionBackward(const DogBackward& dogb)
{
	int bright = dogb.GetX() - 16;
	int bleft = dogb.GetX() - 9;
	int btop = dogb.GetY() - dogb.GetHeight();
	int bbottom = dogb.GetY();
	int tright = x + Width;
	int tleft = x;
	int ttop = y - Height;
	int tbottom = y;

	if (
		bleft <= tright&&
		bright >= tleft&&
		btop <= tbottom&&
		bbottom >= ttop
		)
	{
		isEaten = true;
	}
}

void Bone::Draw(Graphics & gfx) const
{
	gfx.PutPixel(x + 1, y, 255, 255, 255);
	gfx.PutPixel(x + 2, y, 255, 255, 255);
	gfx.PutPixel(x + 9, y, 255, 255, 255);
	gfx.PutPixel(x + 10, y, 255, 255, 255);

	gfx.PutPixel(x, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 3, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 4, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 5, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 6, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 7, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 8, y - 1, 255, 255, 255);
	gfx.PutPixel(x + 11, y - 1, 255, 255, 255);

	gfx.PutPixel(x, y - 2, 255, 255, 255);
	gfx.PutPixel(x + 11, y - 2, 255, 255, 255);

	gfx.PutPixel(x + 1, y - 3, 255, 255, 255);
	gfx.PutPixel(x + 10, y - 3, 255, 255, 255);

	gfx.PutPixel(x, y - 4, 255, 255, 255);
	gfx.PutPixel(x + 11, y - 4, 255, 255, 255);

	gfx.PutPixel(x, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 3, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 4, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 5, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 6, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 7, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 8, y - 5, 255, 255, 255);
	gfx.PutPixel(x + 11, y - 5, 255, 255, 255);

	gfx.PutPixel(x + 2, y - 6, 255, 255, 255);
	gfx.PutPixel(x + 3, y - 6, 255, 255, 255);
	gfx.PutPixel(x + 9, y - 6, 255, 255, 255);
	gfx.PutPixel(x + 10, y - 6, 255, 255, 255);
}

bool Bone::IsEaten() const
{
	return isEaten;
}