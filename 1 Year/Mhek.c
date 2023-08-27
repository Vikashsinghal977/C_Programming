#include<stdio.h>
int  main(){
    //loop;
    int a=5, b=10;
    char op;
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    
    default:
        printf("You enter a other operater :");
        break;
    }
    return 0;
    







}
