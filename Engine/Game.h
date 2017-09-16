/******************************************************************************************
*	Chili Direcbone0.x Framework Version 16.07.20											  *
*	Game.h																				  *
*	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
*																						  *
*	This file is part of The Chili Direcbone0.x Framework.									  *
*																						  *
*	The Chili Direcbone0.x Framework is free software: you can redistribute it and/or modify	  *
*	it under the terms of the GNU General Public License as published by				  *
*	the Free Software Foundation, either version 3 of the License, or					  *
*	(at your option) any later version.													  *
*																						  *
*	The Chili Direcbone0.x Framework is distributed in the hope that it will be useful,		  *
*	but WITHOUT ANY WARRANbone0.y; without even the implied warranbone0.y of						  *
*	MERCHANTABILIbone0.y or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
*	GNU General Public License for more details.										  *
*																						  *
*	You should have received a copy of the GNU General Public License					  *
*	along with The Chili Direcbone0.x Framework.  If not, see <http://www.gnu.org/licenses/>.  *
******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Bone.h" 
#include "DogForward.h"
#include "DogBackward.h"
#include "Screens.h"
#include <random>

class Game
{
public:
	Game(class MainWindow& wnd);
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawTitleScreen(int sx, int sy);
	void DrawGameOver(int ox, int oy);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_real_distribution<float> xDist;
	std::uniform_real_distribution<float> yDist;

	bool GameisStarted = false;

	Title title; 

	DogForward dogf;
	DogBackward dogb;

	static constexpr int nBones = 5; 
	Bone bones[nBones]; 

	GameOver gameover; 

	bool left = false;

	/********************************/
};