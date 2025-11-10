#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

#define PLUS_INPUT '+'
#define MINUS_INPUT '-'
#define DIVISION_INPUT '/'
#define MULTIPLY_INPUT  '*'
#define POWER_INPUT '^'
#define REMAINDER_INPUT '%'

#define HELP 'h'

int main() {
    float num1, num2;
    char operation;
    float res;
    if(scanf("%f %c %f", &num1, &operation, &num2) == 3) {
        switch(operation) {
            case PLUS_INPUT:
                res = sum(num1, num2);
                printf("%.2f\n", res);
                break;
            case MINUS_INPUT:
                res = subtraction(num1, num2);
                printf("%.2f\n", res);
                break;
            case DIVISION_INPUT:
                res = division(num1, num2);
                printf("%.2f\n", res);
                break;
            case MULTIPLY_INPUT:
                res = multiply(num1, num2);
                printf("%.2f\n", res);
                break;
            case POWER_INPUT:
                res = power(num1, num2);
                printf("%.2f\n", res);
                break;
            case REMAINDER_INPUT:
                res = myRemainder(num1, num2);
                printf("%.2f\n", res);
                break;
            case HELP:
                help();
                break;
            default:
                printf("Incorrect input!!!\n\
                h - To see the list of commands\n");
        }
    } else {
        scanf("%c", &operation);
        if (operation == 'h') {
            help();
        } else printf("Incorrect input!!!\n'h' - To see the list of commands\n");
    }


    return 0;
}
