//write a program to swap two numbers without using 3rd variable
int main(){
	int a,b;
	printf("Enter two numbers a and b : ");
	scanf("%d%d",&a,&b);
	a=a+b-(b=a);
	printf("After swaping a=%d b=%d",a,b);
	return 0;
}
