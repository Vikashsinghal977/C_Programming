#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        for (int j=4;j>=i;j--){
            printf("%d",j);
        }
        for (int k=1;k<=i;k++){
            printf("%d",i);
    	}
    	printf("\n");
    }
}
