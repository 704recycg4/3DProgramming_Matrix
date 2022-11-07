#pragma once
#include <iostream>

struct vec3
{
    float x,y =0;
    float z = 1;
};

struct mat3
{
    float mat3[3][3][3] = {0};
    //float vec3[3];
};

int start()
{
	std::cout << "Hello World!\n";

}