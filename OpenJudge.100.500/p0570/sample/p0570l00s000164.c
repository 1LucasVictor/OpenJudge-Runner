#include<stdio.h>

int main()
{
	int A,B,R;
	scanf("%d%d",&A,&B);

	if(abs(B-A)%2==0)
	{
		R =abs(B-A)/2;
		if (A<B){
            R=A+R;
            }
		else
		{
		    R=B+R;
		}
		printf("%d",R);
	}

	else
	{
		printf("IMPOSSIBLE\n");
	}
	return 0;
}
