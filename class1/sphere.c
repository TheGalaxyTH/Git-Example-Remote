//
// Created by 12777 on 2022/9/30.

#include <stdio.h>
#include <math.h>

int main(){
    const double pi=3.14159;
    int radius = 100;
    double surface_area=4*pi*radius*radius;
    double volume = 4.0/3 *pi*radius*radius* radius;
    printf("%-15.4f : surface_area\n%-15.4f : volume.",surface_area,volume);
    return 0;
}
