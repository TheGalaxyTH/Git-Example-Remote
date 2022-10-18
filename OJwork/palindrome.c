#include<stdio.h>

int main(){
    int n,fill=0;
    char str[114514],enter,temp;
    scanf("%d%c",&n,&enter);
    for (int i = 0; i < n; ++i) {
        scanf("%c",&str[i]);
    }
    for (int i = 0; i < n ; ++i) {
        if(str[i]!=str[n-i-1]) {
            if (str[i] == '?') {
                temp=str[i];
                str[i] = str[n - i -1];
                str[n-i-1]=temp;
            }
            printf("%c",str[i]);
        } else if(str[i]=='?'){
            if(i+1<=n/2){
                printf("%d%d",fill/10,fill%10);
                fill++;
            } else{
                fill--;
                printf("%d%d",fill%10,fill/10);
            }
        } else{
            printf("%c",str[i]);
        }
    }
}