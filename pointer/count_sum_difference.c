#include <stdio.h>
void sum_diff(double op1, double op2, double *psum, double *pdiff);
int main()
{
    double op1, op2, sum, diff;
    scanf("%lf %lf", &op1, &op2);
    sum_diff(op1, op2, &sum, &diff);
    printf("Sum = %f, Difference = %f", sum, diff);
    return 0;
}
void sum_diff(double op1, double op2, double *psum, double *pdiff)
{
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}