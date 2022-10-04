//
// Created by 12777 on 2022/10/4.
//
#include <stdio.h>

int main() {
    {
        int year,month,day,jdn;
        scanf("%d%d%d",&year,&month,&day);
        jdn=day+
            (153*(month+12*((14-month)/12)-3)+2)/5+
            365*(year+4800-(14-month)/12)+
            (year+4800-(14-month)/12)/4-
            (year+4800-(14-month)/12)/100+
            (year+4800-(14-month)/12)/400-
            32045;
        printf("%d",jdn);
        return 0;
    }
}