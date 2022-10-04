//
// Created by 12777 on 2022/10/4.
//
#include <stdio.h>

int main()
{
    char month[20],weekday[20];
    int day,hour,minute,second,year;
    scanf("%s%d%4d%s%d%d%d",&month,&day,&year,&weekday,&hour,&minute,&second);
    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d ",weekday,month,day,hour,minute,second,year);
    return 0;
}