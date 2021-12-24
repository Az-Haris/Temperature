#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\n\t\t\tWelcome to Temperature Conversion");

    float cel, kel;
    printf("\n\n\tPlease Enter Kelvin value of Temperature = ");
    scanf("%f", &kel);
    cel=kel-273;
    printf("\n\tCelsius value is = %.2f", cel);
    getch();
    return 0;
}
