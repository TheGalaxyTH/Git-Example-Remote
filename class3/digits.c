//
// Created by 12777 on 2022/10/14.
//
#include <stdio.h>
int main(){
    int number=0;
    scanf("%d",&number);

    int num_of_digits=0;
    do{
        number /= 10;
        num_of_digits++;
    }while (number > 0);
    printf("%d",num_of_digits);
}