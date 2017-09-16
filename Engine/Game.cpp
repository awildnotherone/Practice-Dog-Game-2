/******************************************************************************************
*	Chili Direcbone0.x Framework Version 16.07.20											  *
*	Game.cpp																			  *
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
#include "MainWindow.h"
#include "Game.h"
#include <random>

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	rng(rd()),
	xDist(0, gfx.ScreenWidth - 12),
	yDist(0, gfx.ScreenHeight - 7)

{
	for (int i = 0; i < nBones; i++)
	{
		bones[i].Init(xDist(rng), yDist(rng));
	}
}

void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (GameisStarted)
	{
		// screen constraints 

		dogf.ClamptoScreen();
		dogb.ClamptoScreen();

		// movement

		left = wnd.kbd.KeyIsPressed(VK_LEFT);

		if (left)
		{
			dogb.Draw(gfx);
		}
		else
		{
			dogf.Draw(gfx);
		}

		// Process Collision Loop

		for (int i = 0; i < nBones; i++)
		{
			bones[i].Update(); 
			bones[i].ProcessConsumptionForward(dogf); 
			bones[i].ProcessConsumptionBackward(dogb); 
		}

		dogf.Update(wnd.kbd);
		dogb.Update(wnd.kbd);
		
	}
	else
	{
		if (wnd.kbd.KeyIsPressed(VK_RETURN))
		{
			GameisStarted = true;
		}
	}

	bool allEaten = true; 
	for (int i = 0; i < nBones; i++)
	{
		allEaten = allEaten && bones[i].IsEaten(); 
	}

	if (allEaten)
	{
		gameover.Draw(gfx); 
	}

}

void Game::ComposeFrame()
{
	if (!GameisStarted)
	{
		title.Draw(gfx); 
	}
	if (GameisStarted)
	{
		for (int i = 0; i < nBones; i++)
		{
			if (!bones[i].IsEaten())
			{
				bones[i].Draw(gfx); 
			}
		}
	}
}
