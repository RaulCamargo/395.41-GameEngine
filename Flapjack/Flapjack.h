#pragma once

#include "FlapjackApp.h"
#include "GameWindow.h"
#include "Sprite.h"
#include "Shader.h"
#include "Renderer.h"
#include "KeyCodes.h"



#define FLAPJACK_APP_START(classname) \
\
int main()\
{\
	classname game;\
	game.Run();\
}
