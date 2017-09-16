#pragma once

#include "Graphics.h"  

class Title
{
public: 
	void Draw(Graphics& gfx) const;
private: 
	int x=250; 
	int y=150; 
};

class GameOver
{
public: 
	void Draw(Graphics& gfx) const; 
private: 
	int x=75; 
	int y=100; 
};