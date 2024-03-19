#include<stdio.h>
int main()
{
	int S;
	scanf("%d",&S);
	if((S%10)==(((S-(S%10))/10)%10))

		printf("Bad\n");

        else if(((S%100)/10)==(((S-((S%100)/10))/100)%10))

		printf("Bad\n");

        else if(((S/100)%10)==(S/1000))

		printf("Bad\n");
	else
		printf("Good\n");

	return 0;
}
