//
// Created by 12777 on 2022/10/5.
//
#include <stdio.h>

int main() {
    int i,n;
    long long sum=0,product=1;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        product = product*i;
        sum = sum + product;
    }
    printf("%lld",sum%1000000007);
    return 0;
}