#include<stdio.h>
#include<math.h>
int main()
{
	char t[5],k;
	scanf("%s",t);
	for(long long i=0;i<3;i++)
	{
		if(t[i]==t[i+1]){
			k=1;
			break;
		}
	}

	if(k==1)
		printf("Bad");
	else
		printf("Good");
	return 0;
}