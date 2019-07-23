//To print the reverse of a given number 
#include<stdio.h>
int main(){
	int num,i,rev=0;
	printf("Enter a number :");
	scanf("%d",&num);
	while(num>0){
		i=num%10;
		rev=rev*10+i;
		num/=10;
	}
	printf("Reverse of number : %d",rev);
	return 0;
}
