#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\n\t\t\tWelcome to Temperature Conversion");
    float kel, far;
    printf("\n\n\tPlease Enter Fahrenheit value of Temperature = ");
    scanf("%f", &far);
    kel=((5*(far-32))/9)+273;
    printf("\n\tKelvin value is = %.2f", kel);
    getch();
    return 0;
}
