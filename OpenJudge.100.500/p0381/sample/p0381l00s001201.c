#include<stdio.h>
#define Number 100

int main()
{

	int a;
	float sum;
	int count2[Number];
	int count=0;
	int i,j,z;

while(1)
{
	scanf("%d",&a);
	scanf("%f",&sum);
	//printf("a:%d sum:%f\n",a,sum);

	if(a==0 && sum==0)
	break;
	count2[count]=0;
		for (i=1;i<sum/3;i++)
		{
			for (j=i+1;j<(sum-i)/2;j++)
			{
				//printf("i:%d j:%d\n",i,j);
				if(sum-i-j<=a)
					count2[count]++;
		    }
		}
		count++;

}

for(z=0;z<count;z++)
printf("%d\n",count2[z]);

}

