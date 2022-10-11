//
// Created by 12777 on 2022/10/7.
//
#include <stdio.h>

int main() {
    int leap = 0,year;
    scanf("%d", &year);
    leap=(year%4==0 && year%100!=0)||(year%400==0);
    if(leap){
    printf("%d is a leap year.",year);
    } else{
    printf("%d is a common year.",year);
    }
    return 0;
}