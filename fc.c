#include <stdio.h>
double c_to_f(double C){
    double F;
    F = (1.8*C) + 32;
    return F;
}
double f_to_c(double F) {
    double C;
    C = (F - 32) * 5 / 9;
    return C;
}
int main() {
    int mode;
    double f,c;
    double res;
    printf("1 - from c to f / 2 - from f :");
    scanf_s("%d", &mode);
    if (mode == 1)
    {
        printf("Enter Celsius:");
        scanf_s("%lf", &c);
        res= c_to_f(c);
        printf("Fahrenheit: %lf", res);
    }
    if (mode == 2)
    {
        printf("Enter Fahrenheit:");
        scanf_s("%lf", &f);
        res = f_to_c(f);
        printf("Celsius: %lf" , res);
    }
    return 0;
}