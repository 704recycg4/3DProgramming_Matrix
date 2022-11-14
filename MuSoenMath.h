#pragma once

struct vec
{
    float vec3[3] = { 0,0,1 };
    float vec1x3[3] = { 0,};

    float vec4[4] = { 0,0,0,1 };
    float vec1x4[4] = { 0,};

};

struct mat
{
    float mat3[3][3] = { 0,};
    float mat4[4][4] = { 0,};

};