#pragma once
#include "Graphics.h" 
#include "DogBackward.h"
#include "DogForward.h"

class Bone
{
public:
	void Init(int in_x, int in_y); 
	void Update();
	void ProcessConsumptionForward(const DogForward& dogf);
	void ProcessConsumptionBackward(const DogBackward& dogb);
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
private:
	int x;
	int y;
	static constexpr int Width = 12;
	static constexpr int Height = 7;
	bool isEaten = false; 
};