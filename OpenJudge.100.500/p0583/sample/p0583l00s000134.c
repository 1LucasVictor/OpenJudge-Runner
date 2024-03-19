#include<stdio.h>

int main()
{
	int N,A,B,C,D;
	char S[200005];
	int i,j;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	scanf("%s",&S);
        for(i=A;i<C-1;i++)
        {
                if((S[i]=='#')&&(S[i+1]=='#'))
                {
                        printf("No\n");
                        return 0;
                }
        }
	for(i=B;i<D-1;i++)
        {
                if((S[i]=='#')&&(S[i+1]=='#'))
                {
                        printf("No\n");
                        return 0;
                }
        }

	if(C<D)
	{
		printf("Yes\n");
		return 0;
	}else{
		// Find a spot where A can pass B
		for(i=B-1;i<D;i++) 
		{
			if((S[i-1]=='.')&&(S[i]=='.')&&(S[i+1]=='.'))
			{
			   printf("Yes\n");
			   return 0;
			}
		}
		printf("No\n");
		return 0;
	}
}
