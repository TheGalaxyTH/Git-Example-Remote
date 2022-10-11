//
// Created by 12777 on 2022/10/9.
//
#include <stdio.h>

int main() {
    int n,a[114514],b=0,i;
    scanf("%d",&n);
    for (i = 0; n!=1; ++i) {
        a[i]=n;
        if(n%2==0){
            n=n/2;
        } else{
            n=3*n+1;
        }
    }
    for (int j = 0; j < i+1; ++j) {
        if(b<a[j]){
            b=a[j];
        }
    }
    printf("%d %d",i,b);
    return 0;
}