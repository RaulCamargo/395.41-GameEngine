#pragma once

#include "FlapjackApp.h"
#include "GameWindow.h"



#define FLAPJACK_APP_START(classname) \
\
int main()\
{\
	classname game;\
	game.Run();\
}
