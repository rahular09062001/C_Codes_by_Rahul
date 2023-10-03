#include<stdio.h>

int main(){

	int a=1,n;

	printf("Enter the value of for which multiple is to be calculated \n");
	scanf("%d",&n);

	while(a<=10){
	
		printf("%d X %d = %d \n",a,n,(a*n));
		a++;
	}

	return 0;
}
