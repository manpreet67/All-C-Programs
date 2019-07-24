//write a program to find sum of all numbers which is divisible by 2 between two numbers
#include<stdio.h>
int main(){
	int start,end,i,sum=0;
	printf("Enter first number :");
	scanf("%d",&start);
	printf("Enter last number :");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		if(i%2==0)
		sum=sum+i;
	}
	printf("Sum of even numbers between %d and %d : %d",start,end,sum);
	return 0;
}
