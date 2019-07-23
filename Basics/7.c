//write a program to swap two numbers using 3rd variable
int main(){
	int a,b,c;
	printf("Enter two numbers a and b : ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After Swaping a=%d b=%d",a,b);
	return 0;
}
