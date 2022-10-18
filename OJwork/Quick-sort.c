//
// Created by 12777 on 2022/10/18.
//
#include<stdio.h>
int a[1000000];
int main(){
    int n,k,l=0,r,temp;
    scanf("%d%d",&n,&k);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    r=n-1;
    int pivot=a[k-1], mid=k-1;
    while(l!=r) {
        for (; (l!=r)&&(a[l]<pivot) ; ++l) {
        }
        for (; (l != r) && (a[r] >= pivot); --r) {
            if(a[r]==pivot) {
                mid=r;
            }
        }
        if(l!=r){
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    if(a[l]!=pivot) {
        temp = a[l];
        a[l] = a[mid];
        a[mid] = temp;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
}