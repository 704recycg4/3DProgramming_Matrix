#include <iostream>
#include <math.h>
#include "MuSoenMath.h"// < -아래 자료구조 모두 여기다 구현할것.


mat IdentityMatrix(mat m_1)
{
    for (int i = 0; i < 3; i++) {
        m_1.mat3[i][i] = 1;
    }
    for (int i = 0; i < 4; i++) {
        m_1.mat4[i][i] = 1;
    }
}

mat TransposeMatrix(mat m_1)
{
    mat m_2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m_2.mat3[i][j] = m_1.mat3[j][i];

        }
    }

    return m_2;
}

mat MatrixMultip(mat m_1, mat m_2)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m_1.mat3[i][j] *= m_2.mat3[i][j];
        }
    }
    return m_1;
}

mat MatrixTransposeMultip(mat m_1, mat m_2) 
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m_1.mat3[i][j] *= m_2.mat3[j][i];
        }
    }
    return m_1;
}

vec VectorMultip(vec v_1, vec v_2)
{
    for (int j = 0; j < 3; j++)
    {
        v_1.vec3[0] *= v_2.vec3[0];
        v_1.vec3[1] *= v_2.vec3[1];
        v_1.vec3[2] *= v_2.vec3[2];
    }

    return v_1;
}

vec MultiplyTransposeVector(vec v_1, mat m_2)
{
    mat k;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            k.mat3[j][i] *= v_1.vec3[i];
        }
        v_1.vec3[i] = k.mat3[0][i] + k.mat3[1][i] + k.mat3[2][i];
    }
    return v_1;
}



void main() 
{
    double PI = 3.14159;

    vec v;

    mat Translate;

    Translate.mat3[2][0]=  3 ;
    Translate.mat3[2][1]=  5 ;
    Translate.mat3[2][2]=  1 ;

    mat Rotate;
    Rotate.mat3[0][0] = { float(cos(PI / 3)) };
    Rotate.mat3[0][1] = { float(-sin(PI / 3)) };

    Rotate.mat3[1][0] = { float(sin(PI / 3)) };
    Rotate.mat3[1][1] = { float(cos(PI / 3)) };

   

    //cos(PI / 3), -sin(PI / 3);//
    //    sin(PI / 3), cos(PI / 3);//
    mat Scale;

    Scale.mat3[0][0] = { 2 };
    Scale.mat3[1][1] = { 2 };
    Scale.mat3[2][2] = { 1 };

   
   // 3,5 이동 | 30도 회전 | 2배 확대

    vec p;
    p.vec3[0] = { 3};
    p.vec3[1] = {5};
    p.vec3[2] = {1};
}


