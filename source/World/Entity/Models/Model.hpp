/********************************************************************
	Minecraft: Pocket Edition - Decompilation Project
	Copyright (C) 2023 iProgramInCpp
	
	The following code is licensed under the BSD 1 clause license.
	SPDX-License-Identifier: BSD-1-Clause
 ********************************************************************/

#pragma once

#include "Cube.hpp"
#include "Mob.hpp"

class Model
{
public:
	virtual void onGraphicsReset();
	virtual void prepareMobModel(Mob*, float, float, float);
	virtual void render(float, float, float, float, float, float);
	virtual void renderHorrible(float, float, float, float, float, float);
	virtual void setupAnim(float, float, float, float, float, float);

public:
	float field_4 = 0.0f;
	bool field_8 = false;
};
