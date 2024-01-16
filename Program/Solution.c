#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];

void CreateMaze()
{
	// 0 : ºó °ø°£ (" ")
	// 1 : º® (¡à)
	// 2 : Å»Ãâ±¸ (¡Ý)

	strcpy(maze[0],  "1111111111");
	strcpy(maze[1],  "1100111101");
	strcpy(maze[2],  "1110111001");
	strcpy(maze[3],  "1110011011");
	strcpy(maze[4],  "1111010011");
	strcpy(maze[5],  "1100000111");
	strcpy(maze[6],  "1101111111");
	strcpy(maze[7],  "1100000111");
	strcpy(maze[8],  "1111110111");
	strcpy(maze[9],  "1110000021");
	strcpy(maze[9],  "1110011111");
	strcpy(maze[10], "1111111111");
}

void Render()
{


}

int main()
{
	return 0;
}
