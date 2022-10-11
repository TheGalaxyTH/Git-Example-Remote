//
// Created by 12777 on 2022/10/7.
//
#include <stdio.h>

int main(){
    int min,a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (int i = 0; i < 10; ++i) {
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
