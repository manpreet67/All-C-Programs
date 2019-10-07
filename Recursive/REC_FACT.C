#include<conio.h>
#include<stdio.h>

int fact(int x)
	{
		int f;
		if(x==0) return(1);

		else f= fact(x-1)*x;

		return (f);
	}

void main()
	{
		int x,a;
		printf("Enter any Number\n");
		scanf("%d",&x);
		a= fact(x);
		printf("\nFactorial = %d", a);
	}