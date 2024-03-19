#include <stdio.h>

/* prototype declaration */
int interest(int principal, int rate, int week);

int main(int argc, const char *argv[])
{
	int dept, week, principal = 100000, rate = 5;
	scanf("%d", &week);
	
	dept = interest(principal, rate, week);	
	
	printf("%d\n", dept);
	return 0;
}

int interest(int principal, int rate, int week)
{
	int i, ans = principal;
	double dept = principal, r = 1.0+rate/100.0;
	
	for(i=0; i<week; i++){
		dept = ans*r;
		if((int)dept%1000) ans = ((int)(dept/1000) + 1)*1000;
		else ans = (int)dept;
	}
	
	return ans;
}