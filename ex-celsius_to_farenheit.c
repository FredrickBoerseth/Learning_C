#include <stdio.h>

int main() {
    float fahr, celsius, step, lower, upper;

    lower = -17.8;
    upper = 148.9;
    step = 10;

    celsius = lower;

    while (celsius <= upper) {
        fahr = celsius * 1.8 + 32;
        printf("%6.1f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    }
