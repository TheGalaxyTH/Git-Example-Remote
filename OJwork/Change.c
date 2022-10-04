//
// Created by 12777 on 2022/10/3.
//
#include <stdio.h>
int main()
{
    int fifty,twenty,ten,five,one,money;
    scanf("%d",&money);
    fifty=money/50;
    twenty=(money%50)/20;
    ten=((money%50)%20)/10;
    five=(((money%50)%20)%10)/5;
    one=(((money%50)%20)%10)%5;
    printf("%d\n%d\n%d\n%d\n%d\n",fifty,twenty,ten,five,one);
    return 0;
}