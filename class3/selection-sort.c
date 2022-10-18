//
// Created by 12777 on 2022/10/14.
//
#include <stdio.h>
int main(){
    int a[114514],n,min[114514],min_index=0;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if(min[i]>a[j]){
                min[i]=a[j];
                min_index=j;
            }
        }
        a[min_index]=a[i];
        a[i]=min[i];
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
}