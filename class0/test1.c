//
// Created by 12777 on 2022/10/3.
//
#include <stdio.h>
#include <math.h>
int main() {
    {
        int a, b,fh;
        scanf("%d", &a);
        b = fabs(a);
        fh=a/b;
        printf("%d %d %d", a, b,fh);
        return 0;
    }
}