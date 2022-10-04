//
// Created by 12777 on 2022/10/4.
//
#include <stdio.h>

int main() {
    {
        const double G = 6.674e-11, M = 77.15;
        double m, R;
        scanf("%lf%lf", &m, &R);
        printf("%.3e", (G * M * m) / (R * R));
    }
}