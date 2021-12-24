#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\n\t\t\tWelcome to Temperature Conversion");
    float cel, far;
    printf("\n\n\tPlease Enter Fahrenheit value of Temperature = ");
    scanf("%f", &far);
    cel=(5*(far-32))/9;
    printf("\n\tCelsius value is = %.2f", cel);
    getch();
    return 0;
}
