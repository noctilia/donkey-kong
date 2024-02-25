#include "pch.h"
#include "Game.h"
#include <iostream>

int main(int argc, char* argv[])
{
	std::srand(std::time(0)); // use current time as seed for random generator
	Game game;
	game.run(); 
}

#ifdef _WIN32
#include <windows.h>
INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow) {
	return main(__argc, __argv);
}
#endif