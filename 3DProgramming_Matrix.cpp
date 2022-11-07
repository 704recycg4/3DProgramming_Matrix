#include <iostream>
#include <math.h>
#include "MuSoenMath.h"// < -아래 자료구조 모두 여기다 구현할것.

    //vec3(float 3*1) -> 2차원좌표 + 동차좌표

    //mat3(float 3*3) -> 2차원 행렬


void main() 
{
    const double PI = 3.14159;

    vec3 v;

    mat3 Translate;
    Translate.mat3[0][0] = { 1 };
    Translate.mat3[1][1] = { 1 };
    Translate.mat3[2][2]= { 1 };

    mat3 Rotate;
    Rotate.mat3[0][0] = { float(cos(PI / 3)) };
    Rotate.mat3[0][1] = { float(-sin(PI / 3)) };

    Rotate.mat3[1][0] = { float(sin(PI / 3)) };
    Rotate.mat3[1][1] = { float(cos(PI / 3)) };

   

    //cos(PI / 3), -sin(PI / 3);//
    //    sin(PI / 3), cos(PI / 3);//
    mat3 Scale;

    Scale.mat3[0][0] = { 2 };
    Scale.mat3[1][1] = { 2 };
    Scale.mat3[2][2] = { 1 };


   

    vec3 p = v * Translate * Rotate * Scale;   // 3,5 이동 | 30도 회전 | 2배 확대
    std::cout << "Hello World!\n";


}


float multip(vec3 v2, mat3 m3)
{
    vec3 p;
    vec3 k;

    for (int j=0; j < 3; j++)
    {

        p.vec3[0] *= v2[0][j];
        p *= v2[1][j];
        p[2] *= v2[2][j];

        k[i] = p[0] + p[1] + p[2];
    }
}


