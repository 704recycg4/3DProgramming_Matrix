#include <iostream>
#include <math.h>
#include "MuSoenMath.h"// < -아래 자료구조 모두 여기다 구현할것.

    //vec3(float 3*1) -> 2차원좌표 + 동차좌표

    //mat3(float 3*3) -> 2차원 행렬

vec3 multip(vec3 v, mat3 m)
{
    vec3 k;
    std::cout << "-----------------------------\n";
    for (int j = 0; j < 3; j++)
    {
        std::cout << "-----" << j + 1 << "번째" << "-----\n";

        v.vec[0] *= m.mat[0][j];
        v.vec[1] *= m.mat[1][j];
        v.vec[2] *= m.mat[2][j];

        std::cout << " x " << v.vec[0] << "\n";
        std::cout << " y " << v.vec[1] << "\n";
        std::cout << " z " << v.vec[2] << "\n";

        k.vec[j] = v.vec[0] + v.vec[1] + v.vec[2];
        
    }
    //std::cout <<" x "<< p.vec[0];

    return k;
}

void main() 
{
    double PI = 3.14159;

    vec3 v;

    mat3 Translate;

    Translate.mat[2][0]=  3 ;
    Translate.mat[2][1]=  5 ;
    Translate.mat[2][2]=  1 ;

    mat3 Rotate;
    Rotate.mat[0][0] = { float(cos(PI / 3)) };
    Rotate.mat[0][1] = { float(-sin(PI / 3)) };

    Rotate.mat[1][0] = { float(sin(PI / 3)) };
    Rotate.mat[1][1] = { float(cos(PI / 3)) };

   

    //cos(PI / 3), -sin(PI / 3);//
    //    sin(PI / 3), cos(PI / 3);//
    mat3 Scale;

    Scale.mat[0][0] = { 2 };
    Scale.mat[1][1] = { 2 };
    Scale.mat[2][2] = { 1 };

   
   // 3,5 이동 | 30도 회전 | 2배 확대


    vec3 p = multip(v, Translate);
    std::cout << " x " << p.vec[0];
    std::cout << " y " << p.vec[1];
    std::cout << " z " << p.vec[2];

    p = multip(p, Rotate);
    std::cout << " x " << p.vec[0];
    std::cout << " y " << p.vec[1];
    std::cout << " z " << p.vec[2];
    
    p = multip(p , Scale);
    std::cout <<" x "<< p.vec[0];
    std::cout <<" y "<< p.vec[1];
    std::cout <<" z "<< p.vec[2];
}


