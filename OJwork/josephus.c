//
// Created by 12777 on 2022/10/16.
//
#include<stdio.h>

int main(){
    int n,k,survivor=0;
    scanf("%d%d",&n,&k);
    for (int i = 2; i <= n; ++i) {
        survivor=(survivor+k)%i;
    }
    printf("%d",survivor+1);
    return 0;
}