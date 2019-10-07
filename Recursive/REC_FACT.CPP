#include<conio.h>
#include<iostream.h>

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
		cout<<"Enter any Number\n";
		cin>>x;
		a= fact(x);
		cout<<"\nFactorial = "<<a;
	}