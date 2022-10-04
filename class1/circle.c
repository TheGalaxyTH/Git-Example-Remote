//
// Created by 12777 on 2022/9/30.
//
#include <stdio.h>

int main(){
    int radius = 10;
    const double pi=3.14159;
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    printf("circumference = %f\n area= %f\n",circumference,area);

    return 0;
}