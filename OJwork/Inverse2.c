//
// Created by 12777 on 2022/10/10.
//
#include <stdio.h>
char text[10000000];
int main() {
    int n,k;
    char a;
    scanf("%d",&n);
    scanf("%c",&a);
    for (int i = 0; i < n; ++i) {
        scanf("%c",&text[i]);
    }
    scanf("%d",&k);
    if(k==0||k==n){
        for (int i = n-1; i >= 0; --i) {
            printf("%c",text[i]);
        }
    } else{
        for (int i = k - 1; i >= 0; --i) {
            printf("%c", text[i]);
        }
        for (int i = n - 1; i > k - 1; --i) {
            printf("%c", text[i]);
        }
    }
    return 0;
}