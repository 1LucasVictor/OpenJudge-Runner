#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,A,B,C,D;
	char S[200005];
	int i,j,check;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	for(i=0;i<N;i++) scanf("%c",&S[i]);
        // Check if can move A to C
        for(i=A-1;i<C-2;i++)
        {
                if((S[i]=='#')&&(S[i+1]=='#'))
                {
                        printf("No\n");
                        return 0;
                }
        }
 
	if(C<D)
	{
	  // Check if can move B to D
	  for(i=B-1;i<D-2;i++) 
	  {
		  if((S[i]=='#')&&(S[i+1]=='#'))
		  {
			  printf("No\n");
			  return 0;
		  }
	  }
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
