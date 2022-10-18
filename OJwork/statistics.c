//
// Created by 12777 on 2022/10/16.
//
#include<stdio.h>

int main(){
    int n,ascii,num[114514]={0},max=0,length=0;
    char character,a;
    scanf("%d",&n);
    scanf("%c",&a);
    for (int i = 0; i < n; ++i) {
        scanf("%c",&character);
        ascii=character;
        num[ascii]++;
    }
    for (int i = 65; i < 123; ++i) {
        if(max<num[i]){
            max=num[i];
        }
    }
    for (int i = 65; i < 91; ++i) {
        if((num[i]==0)&&(num[i+32]!=0)||(num[i]!=0)&&(num[i+32]==0)){
            length+=2;
        } else if((num[i]!=0)&&(num[i+32]!=0)){
            length+=3;
        }
    }
    for (int j = 1; j <= max; ++j) {
        for (int i = 65; i < 91; ++i) {
            if(num[i+32]!=0){
                if(j>max-num[i+32]) {
                    printf("=");
                }else{
                    printf(" ");
                }
            }
            if(num[i]!=0){
                if(j>max-num[i]) {
                    printf("=");
                }else{
                    printf(" ");
                }
            }
            if(!((num[i]==0)&&(num[i+32]==0))){
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= length-1; ++i) {
        printf("-");
    }
    printf("\n");
    for (int i = 65; i < 91; ++i) {
        if(num[i+32]!=0){
            printf("%c",i+32);
        }
        if(num[i]!=0){
            printf("%c",i);
        }
        if(!((num[i]==0)&&(num[i+32]==0))){
            printf(" ");
        }
    }
    return 0;
}