#pragma once
#include "Graphics.h" 
#include "DogBackward.h"
#include "DogForward.h"

class Bone
{
public:
	void Init(float in_x, float in_y); 
	void Update();
	void ProcessConsumptionForward(const DogForward& dogf);
	void ProcessConsumptionBackward(const DogBackward& dogb);
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
private:
	float x;
	float y;
	static constexpr float Width = 12.0f;
	static constexpr float Height = 7.0f;
	bool isEaten = false; 
};