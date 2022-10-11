//
// Created by 12777 on 2022/10/9.
//
#include <stdio.h>

int main() {
    float x,y=0,a[114514]={1};
    int n;
    scanf("%f%d",&x,&n);
    for (int i = 1; i <= n; ++i) {
        a[i]=a[i-1]*x*x;
    }
    for (int i = 0; i <= n; ++i) {

        if(i%2==0){
            y+=a[i]*x/(2*i+1);
        } else{
            y-=a[i]*x/(2*i+1);
        }
    }
    printf("%.10f",4*y);
    return 0;
}