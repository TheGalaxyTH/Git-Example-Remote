//
// Created by 12777 on 2022/10/14.
//
#include <stdio.h>
int main(){
    int line;
    scanf("%d",&line);
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < line-i-1; ++j) {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; ++j) {
            printf("*");
        }
        if(i==line-1){
            break;
        }
        printf("\n");
    }
    return 0;
}