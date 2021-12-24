#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\n\t\t\tWelcome to Temperature Conversion");
    float kel, far;
    printf("\n\n\tPlease Enter Kelvin value of Temperature = ");
    scanf("%f", &kel);
    far=((9*(kel-273))/5)+32;
    printf("\n\tFahrenheit value is = %.2f", far);
    getch();
    return 0;
}
