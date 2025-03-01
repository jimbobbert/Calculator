#include <stdio.h>
#include <float.h>
#include <math.h>
#define PI 3.14159265

int main(){
    double a, b, result;
    int operator;
    
    printf("Enter an operator: \n0 *, 1 /, 2 +, 3 -, 4 %%\n\n5 sin, 6 cos, 7 tan, 8 square root, 9 square\n");
    scanf("%d", &operator);

    if (operator>=0  && operator<=4){
        printf("Choose two operands:\n");
        scanf("%lf %lf", &a, &b);
        switch (operator){
        case 0:
            result = a * b;
        break;
        case 1:
            if(b!=0){
            result = a / b;
            }
            else{
                printf("ERROR: Division by zero\n");
                return 1;
            }
        break;
        case 2:
            result = a + b;
        break;
        case 3:
            result = a - b;
        break;
        case 4:
            result = fmod(a,b);
        break;
        }
        printf("Result: %lf",result);
        return 0;
    }
    else{
        printf("Choose an operand:\n");
        scanf("%lf", &a);
                switch (operator){
        case 5:
            result = sin(a*PI/180);
        break;
        case 6:
            result = cos(a*PI/180);
        break;
        case 7:
            result = tan(a*PI/180);
        break;
        case 8:
            if(a>=0){
                result = sqrt(a);
            }
            else{
                printf("ERROR: Negative input for square root\n");
                return 1;
            }
        break;
        case 9:
            result = (a * a);
        break;
        default:
        printf("ERROR\n");
        return 1;
        }
    }
    printf("Result: %lf",result);
    return 0;
}
