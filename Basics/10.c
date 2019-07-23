//write a program to convert days into years,week and monts
int main(){
	int nodays,week,days,year;
	printf("Enter number of days: ");
	scanf("%d",&nodays);
	year=nodays/365;
	//months=(year%365)/12;
	week=((nodays%365))/7;
	days=(nodays%365)%7;
	printf("%d =%d years,%d weeks,%d days",nodays,year,week,days);
	return 0;
}
