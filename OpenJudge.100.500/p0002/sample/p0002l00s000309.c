#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i,count;
	int a,b,c,A,B,C;
	scanf("%d",&count);
	for(i=0;i<count;i++){
		scanf("%d %d %d",&a,&b,&c);
		A = a*a;
		B = b*b;
		C = c*c;
		if(A==B+C||B==C+A||C==A+B) printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}