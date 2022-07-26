//C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c ,r1, r2, imaginary, discriminant;
    printf("Enter value of a ,b and c of quadratic equation (aX^2 + bX + c):\n ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = (b * b) - (4 * a * c);
    switch(discriminant > 0)
    {
    case 1:
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f",
               r1, r2);
        break;
    case 0:

        switch(discriminant < 0)
        {
        case 1:
            r1 = r2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   r1, imaginary, r2, imaginary);
            break;
        case 0:
            r1 = r2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
            break;
        }
    }
    return 0;
}
