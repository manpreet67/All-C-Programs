//Sum of n numbers
#include<stdio.h>
int main(){
	int n,i,sum;
	sum=0;
	printf("Enter number where you want to find sum: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	sum=sum+i;
	printf("Sum: %d",sum);
	return 0;
}
