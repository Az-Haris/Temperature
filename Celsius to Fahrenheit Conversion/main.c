#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\n\t\t\tWelcome to Temperature Conversion");
    float cel, far;
    printf("\n\n\tPlease Enter Celsius value of Temperature = ");
    scanf("%f", &cel);
    far=((9*cel)/5)+32;
    printf("\n\tFahrenheit value is = %.2f Degree", far);
    getch();
    return 0;
}
