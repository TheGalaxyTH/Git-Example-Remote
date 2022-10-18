//
// Created by 12777 on 2022/10/16.
//
#include<stdio.h>

int main(){
    int n,a[2000]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;i*j<=n;j++){
            if(a[i*j]==0){
                a[i*j]=1;
            }else{
                a[i*j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            printf("%d ",i);
        }
    }
    return 0;
}