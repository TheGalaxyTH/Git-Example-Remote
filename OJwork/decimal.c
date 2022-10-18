//
// Created by 12777 on 2022/10/17.
//
#include<stdio.h>

int main(){
    int len,N,ascii[40],legal=1,num[40],sum=0,i,product=1;
    char string[40]={0},a;
    scanf("%d%d",&len,&N);
    scanf("%c",&a);
    for (i = 0; i < len; ++i) {
        scanf("%c",&string[i]);
        ascii[i]=string[i];
        if(N<=10){
            if(ascii[i]>=N+48){
                legal=0;
            }
        }else if(ascii[i]>=N+55){
            legal=0;
        }
    }
    if(legal){
        for (i=i-1; i>=0 ; --i) {
            if(ascii[i]<=57){
                num[i]=ascii[i]-48;
            } else {
                num[i]=ascii[i]-55;
            }
            sum=sum+num[i]*product;
            product=product*N;
        }
    }
    if(legal==0){
        printf("Error");
    } else
        printf("%d",sum);
}