// This is an armstrong number using do while loop
#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf
int main()b 
{
    int no_of_digits = 0, number, n, remainder, quotient, sum = 0, a, b;
    p("Enter a number here: ");
    s("%d", &number);
    n = number;
    do
    {
        remainder = number % 10;
        no_of_digits = no_of_digits + 1;
        number = number / 10;
    } while (number > 0);
    do
    {
        remainder = number % 10;
        a = pow(remainder, no_of_digits);
        sum = sum + a;
        quotient = number / 10;
    } while (number > 0);
    printf("%d", sum);
    if (n == sum){
        p("The number is armstrong");
    }
    else
    {
        p("The number is not armstrong");
    }
    return 0;
}