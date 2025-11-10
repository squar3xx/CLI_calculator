#include <stdio.h>
#include "my_math.h"

float sum(float num1, float num2) {
    return num1 + num2;
}
float subtraction(float num1, float num2) {
    return num1 - num2;
}
float multiply(float num1, float num2) {
    return num1 * num2;
}
float division(float num1, float num2) {
    return num1 / num2;
}
float power(float num1, float num2) {
    if (0 == num2) return 1;
    else if((int)num2 % 2 == 0) return power(num1 * num1, num2 / 2);
    return num1 * power(num1, num2 - 1);
}
float myRemainder(float num1, float num2) {
    return (int)num1 % (int)num2;
}

void help() {
    printf("[FIRST NUMBER] [OPERATION] [SECOND NUMBER]\n\
    '+' - Sum of two numbers\n    '-' Subtracting two numbers\n\
    '/' - Division of two numbers\n    '*' Multiply of two numbers\n\
    '^' - Power of two numbers\n    '%%' - Remainder of two numbers\n");
}
