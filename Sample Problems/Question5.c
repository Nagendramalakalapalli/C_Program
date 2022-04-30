#include <stdio.h>
#include <math.h>
double first_root_quadratic(double a, double b, double c)
{
    double real, imag, num,res;
    num = (b*b) - (4*a*c);
    if (num > 0) {
        res = (-b + sqrt(num)) / (2 * a);
        printf("root1 = %lf and root2 = %lf", res);
    }
    else if (num == 0) {
        res = -b / (2 * a);
        printf("r1 = r2 = %lf;", res);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-num) / (2 * a);
        printf("r1 = %lf+%lf and r2 = %f-%f", real, imag, real, imag);
    }
}

int main() {
    double a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    first_root_quadratic(a,b,c);
    return 0;
}