// This is a palindrome number using do while loop
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int number, n, remainder, quotient, reverse = 0, i = 0;
    p("Enter a number here: ");
    s("%d", &number);
    n = number;
    do
    {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number =  reverse/ 10;
    } while (number != 0);
    if (reverse == n)
    {
        p("The number is palindrome");
    }
    else
    {
        p("The number is not palindrome");
    }
    return 0;
}