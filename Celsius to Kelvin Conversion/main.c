#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\n\t\t\tWelcome to Temperature Conversion");

    float cel, kel;
    printf("\n\n\tPlease Enter Celsius value of Temperature = ");
    scanf("%f", &cel);
    kel=cel+273;
    printf("\n\tKelvin value is = %.2f", kel);
    getch();
    return 0;
}
