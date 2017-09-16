#include "Bone.h"

void Bone::Init(float in_x, float in_y)
{ 
	x = in_x; 
	y = in_y; 
}

void Bone::Update()
{

}

void Bone::ProcessConsumptionForward(const DogForward& dogf)
{
	float fright = dogf.GetX() + 16; 
	float fleft = dogf.GetX() + 9;
	float ftop = dogf.GetY() - dogf.GetHeight();
	float fbottom = dogf.GetY();
	float tright = x + Width; 
	float tleft = x; 
	float ttop = y - Height; 
	float tbottom = y;

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
	float bright = dogb.GetX() - 16;
	float bleft = dogb.GetX() - 9;
	float btop = dogb.GetY() - dogb.GetHeight();
	float bbottom = dogb.GetY();
	float tright = x + Width;
	float tleft = x;
	float ttop = y - Height;
	float tbottom = y;

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

bool Bone::IsEaten() const
{
	return isEaten;
}

void Bone::Draw(Graphics & gfx) const
{
	const int x_int = int(x);
	const int y_int = int(y);

	gfx.PutPixel(x_int + 1, y_int, 255, 255, 255);
	gfx.PutPixel(x_int + 2, y_int, 255, 255, 255);
	gfx.PutPixel(x_int + 9, y_int, 255, 255, 255);
	gfx.PutPixel(x_int + 10, y_int, 255, 255, 255);

	gfx.PutPixel(x_int, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 3, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 4, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 5, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 6, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 7, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 8, y_int - 1, 255, 255, 255);
	gfx.PutPixel(x_int + 11, y_int - 1, 255, 255, 255);

	gfx.PutPixel(x_int, y_int - 2, 255, 255, 255);
	gfx.PutPixel(x_int + 11, y_int - 2, 255, 255, 255);

	gfx.PutPixel(x_int + 1, y_int - 3, 255, 255, 255);
	gfx.PutPixel(x_int + 10, y_int - 3, 255, 255, 255);

	gfx.PutPixel(x_int, y_int - 4, 255, 255, 255);
	gfx.PutPixel(x_int + 11, y_int - 4, 255, 255, 255);

	gfx.PutPixel(x_int, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 3, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 4, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 5, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 6, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 7, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 8, y_int - 5, 255, 255, 255);
	gfx.PutPixel(x_int + 11, y_int - 5, 255, 255, 255);

	gfx.PutPixel(x_int + 2, y_int - 6, 255, 255, 255);
	gfx.PutPixel(x_int + 3, y_int - 6, 255, 255, 255);
	gfx.PutPixel(x_int + 9, y_int - 6, 255, 255, 255);
	gfx.PutPixel(x_int + 10, y_int - 6, 255, 255, 255);
}