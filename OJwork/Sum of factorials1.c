//
// Created by 12777 on 2022/10/8.
//
#include <stdio.h>

int main() {
    int i,n,sum=0,product=1;
    scanf("%d",&n);
    for (i = 1; i <= n; i++){
        product = product*i;
        if(product>10007){
            product=product%10007;
        }
        sum+=product;
    }

    printf("%d",sum%10007);
    return 0;
}