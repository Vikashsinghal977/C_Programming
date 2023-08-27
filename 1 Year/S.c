//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter a number :");
	scanf("%d%d",&a,&b);
	if (a==b){
		printf("Equal");
	}
	else{
		printf("NOT Equal");
	}
	return 0;
}


