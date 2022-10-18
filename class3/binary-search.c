//
// Created by 12777 on 2022/10/14.
//
#include <stdio.h>
int main(){
    int num,n,max,min,a[114514],mid,index;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    max=n-1;
    min=0;
    for (int i = 0; min<=max; ++i) {
        mid=(max+min)/2;
        if(num<a[mid]){
            max=mid;
        }else if(num>a[mid]){
            min=mid;
        } else if(num==a[mid]){
            index=mid;
            break;
        }
    }
    printf("%d",index);

}