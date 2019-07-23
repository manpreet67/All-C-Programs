//write a program to print all the odd numbers till 'N'
int main(){
	int num,i;
	printf("Enter End point ,till there you want odd numbers ");
	scanf("%d",&num);
	for(i=1;i<=num;i=i+2){
		printf("%d ",i);
	}
	
	return 0;
}
