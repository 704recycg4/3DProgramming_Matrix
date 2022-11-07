#pragma once
#include <iostream>

struct vec3
{
    float vec[3] = { 0,0,1 };
};

struct mat3
{
    float mat[3][3] = {0,};
    //float vec3[3];
};

void start()
{
	std::cout << "Hello World!\n";

}