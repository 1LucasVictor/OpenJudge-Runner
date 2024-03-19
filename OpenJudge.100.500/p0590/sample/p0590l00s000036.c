#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,b,c,d,e,k; scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&k);
	int box[5]={a,b,c,d,e};
	int judge=0;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(abs(box[i]-box[j])>k){
				printf(":(");
				judge++;
				break;			
			}
		}

		if(judge==1) break;
		if(judge==0&&i==4) printf("Yay!");

	}
	return 0;
}
