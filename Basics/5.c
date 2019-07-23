//write a program to check whether given number is odd or even
int main(){
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	if(num%2==0){
		printf("Even");
	}
	if(num%2==1){
		printf("Odd");
	}
	return 0;
}
