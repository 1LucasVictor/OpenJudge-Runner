#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,A,B,C,D;
	char S[200005];
	int i,j,check;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	for(i=0;i<N;i++) scanf("%c",&S[i]);
	if(C<D)
	{
	  // Move B first to D
	  for(i=B-1;i<D-2;i++) 
	  {
		  if((S[i]=='#')&&(S[i+1]=='#'))
		  {
			  printf("No\n");
			  return 0;
		  }
	  }
	  // Move A to C
	  for(i=A-1;i<C-2;i++)  
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
		// check if can move A to C
                for(j=A-1;j<C-2;j++) if((S[j]=='#')&&(S[j+1]=='#')) 
		{
			printf("No\n");
			return 0;
		}
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
