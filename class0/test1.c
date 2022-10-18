//
// Created by 12777 on 2022/10/3.
//
#include<stdio.h>

int main(){
    int n,ascii,num[114514]={0},max,length=0;
    char character,a;
    scanf("%d",&n);
    scanf("%c",&a);
    for (int i = 0; i < n; ++i) {
        scanf("%c",&character);
        ascii=character;
        num[ascii]++;
        printf("%d",num[ascii]);
    }
    return 0;
}