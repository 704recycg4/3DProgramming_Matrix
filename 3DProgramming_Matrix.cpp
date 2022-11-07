#include <iostream>
#include <math.h>
#include "MuSoenMath.h"// < -아래 자료구조 모두 여기다 구현할것.

    //vec3(float 3*1) -> 2차원좌표 + 동차좌표

    //mat3(float 3*3) -> 2차원 행렬


void main() 
{
    const double PI = 3.14159

    glm::cos(glm::radians(0.0f)), -glm::sin(glm::radians(0.0f)), 0,
        glm::sin(glm::radians(0.0f)), glm::cos(glm::radians(0.0f))
    vec3 v;

    mat3 Translate;
    Translate.mat3[0][0][0] = { 1 };
    Translate.mat3[1][1][0] = { 1 };
    Translate.mat3[2][2][2] = { 1 };

    mat3 Rotate;
    Rotate.mat3[0][0][0] = { 1 };
    Rotate.mat3[1][1][0] = { 1 };
    Rotate.mat3[2][2][2] = { 1 };
    cos(PI / 3), -sin(PI / 3);//
        sin(PI / 3), cos(PI / 3);//
    mat3 Scale;



    vec3 p = v * Translate * Rotate * Scale;   // 3,5 이동 | 30도 회전 | 2배 확대
    std::cout << "Hello World!\n";


}


