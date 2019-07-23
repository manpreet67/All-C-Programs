//sum of all digits in a number
#include<stdio.h>
int main(){
	
	int num,i,r,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	while(num>0){
		r=num%10;
		sum=sum+r;
		num/=10;
		
	}
	printf("Sum of digits : %d",sum);
	
	return 0;
}
