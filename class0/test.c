//
// Created by 12777 on 2022/9/25.
//
//(fabs(a))/a*(fabs(b))/b*

#include <stdio.h>
#include <math.h>

int main() {
    {
        int p,q;
        double a,b,aa,bb;
        scanf("%d%d",&p,&q);
        a=(-q)/2.0+
          sqrt((q/2.0)*(q/2.0)+(p/3.0)*(p/3.0)*(p/3.0));
        b=(-q)/2.0-
          sqrt((q/2.0)*(q/2.0)+(p/3.0)*(p/3.0)*(p/3.0));
        if(a<0){
            aa=-1;
        }
        else
            aa=1;
        if(b<0){
            bb=-1;
        }
        else
            bb=1;
        double  x=aa*pow(a*a,1/6.0)+bb*pow(b*b,1/6.0);
        printf("%.3f",x);
        return 0;
    }
}