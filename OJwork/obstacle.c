//
// Created by 12777 on 2022/10/10.
//
#include <stdio.h>

int main() {
    int xa,ya,xb,yb,xc,yc,n;
    char move[114514];
    scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
    for (int i  = 0; xa!=xb||ya!=yb; ++i) {
        if(xa<xb&&(xa+1!=xc||(ya!=yc&&xc!=xb))){
            xa+=1;
            move[i]='R';
        } else if(xa>xb&&(xa-1!=xc||(ya!=yc&&xc!=xb))){
            xa-=1;
            move[i]='L';
        } else if(ya<yb&&(ya+1!=yc||xa!=xc)){
            ya+=1;
            move[i]='U';
        } else if(ya>yb&&(ya-1!=yc||xa!=xc)){
            ya-=1;
            move[i]='D';
        } else if(ya==yb&&xa+1==xb){
            xa+=1;
            move[i]='R';
        }else if(ya==yb&&xa-1==xb) {
            xa -= 1;
            move[i] = 'L';
        } else if(xa+1==xc||xa-1==xc){
            ya+=1;
            move[i]='U';
        } else if(ya+1==yc||ya-1==yc){
            xa+=1;
            move[i]='R';
        }
        n=i+1;
    }
    printf("%d\n%s",n,move);
    return 0;
}