//
// Created by 12777 on 2022/9/30.
//
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

    char first_name[10];
    char last_name[10];
    char gender;
    char weekday;
    int birth_year;
    int birth_month;
    int birth_day;
    int c_score;
    int music_score;
    int fuck_score;

    scanf("%s%s %c",first_name,last_name,&gender);

    double avg =(c_score + music_score + fuck_score)/3.0;
    double sd=sqrt(pow);
    int rank = 1;
    printf("%s %s \t %c\n"
           "%.2d-%d-%d \t %.3s.\n"
           "C = %d \t Music = %d \t Fuck =%d \n"
           "AVG = %.1f \t SD = %.2f \t Rank = %d\n",
           first_name,last_name,gender,
           birth_month,birth_day,birth_year,
           c_score,music_score,fuck_score,
           avg,sd,rank);
}