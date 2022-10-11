//
// Created by 12777 on 2022/10/7.
//
#include <stdio.h>

int main() {
    int n,b=0,i,a;
    scanf("%d",&n);
    for (i = 0; i < 2*n-1; ++i) {
        scanf("%d",&a);
        b=b^a;
    }
    printf("%d",b);
    return 0;
}