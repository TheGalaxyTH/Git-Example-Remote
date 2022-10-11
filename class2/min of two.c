//
// Created by 12777 on 2022/10/7.
//
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<=b){
        printf("min{%d,%d}=%d",a,b,a);
    }
    else{
        printf("min{%d,%d}=%d",a,b,b);
    }

    return 0;
}