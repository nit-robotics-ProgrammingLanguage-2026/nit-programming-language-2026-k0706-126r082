
#include <stdio.h>
#include <math.h>

double rad_to_deg(double rad);

int main(void)
{
    double value;
    double radian;
    double degree;

    if (scanf("%lf", &value) != 1)
    {
        return 0;
    }

    if (value < 0.0)
    {
        printf("NG");
        return 0;
    }

    radian = atan(value);
    degree = rad_to_deg(radian);

    printf("%.2f", degree);

    return 0;
}

double rad_to_deg(double rad)
{
    double result;

    result = rad * 180.0 / M_PI;

    return result;
}
