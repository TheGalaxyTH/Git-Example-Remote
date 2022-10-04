//
// Created by 12777 on 2022/10/3.
//
#include <stdio.h>
#include <math.h>

int main()
{
    double pi,pai;
    pi=16*atan(0.2)-4*atan(1.0/239);
    pai= log(640320.0*640320*640320+744)/ sqrt(163.0);
    printf("%.15f\n%.15f",pi,pai);
    return 0;
}