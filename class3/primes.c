//
// Created by 12777 on 2022/10/14.
//
#include <stdio.h>
int main(){
    int max,count;
    scanf("%d",&max);
    for (int i = 2; i <= max; ++i) {
        int is_prime=1;
        for (int j = 2; j*j <= i; ++j) {
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            count++;
            printf("%d ",i);
        }
    }
    printf("\ncount=%d",count);
}