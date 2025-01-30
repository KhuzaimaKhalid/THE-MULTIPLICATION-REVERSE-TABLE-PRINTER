#include<stdio.h>

int main()
{
	int n;

	printf("\t THE MULTIPLICATION REVERSE TABLE PRINTER \n");
		printf("\nEnter Number: ");
		scanf("%d", &n);

	
		for(int j = 10 ; j >= 1 ; j--){
		
		printf("%d x %d = %d \n",n,j,n*j);
	} 

	
	return 0;
}
