//To find the given number is palindrome or not
#include<stdio.h>
int main(){
    int num,rev=0,i,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
    	i=num%10;
    	rev=rev*10+i;
    	num/=10;
	}
	if(temp==rev)
	printf("Given number is Palindrome");
	else
	printf("Given number is not palindrome");
	return 0;
	
}
