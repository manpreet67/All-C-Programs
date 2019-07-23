//write a program to print multiplication by using addition
int main(){
	int a,b,i,res=0;
	printf("Enter number and multiplier : ");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++){
		res+=a;
	}
	printf("%dx%d=%d",a,b,res);
	return 0;
}
