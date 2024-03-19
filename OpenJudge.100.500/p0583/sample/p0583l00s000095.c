#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,A,B,C,D;
	char S[200005];
	int i,j;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	for(i=0;i<N;i++) scanf("%c",&S[i]);
	if(C<D)
	{
	// Move B first to D
	  for(i=B;i<D;i++) 
	  {
		  if((S[i-1]=='#')&(S[i]=='#'))
		  {
			  printf("No\n");
			  return 0;
		  }
	  }
	// Move A to C
	  for(i=A;i<C;i++)  
          {
                  if((S[i-1]=='#')&(S[i]=='#'))
                  {
                          printf("No\n");
                          return 0;
                  }
          }
	  printf("Yes\n");
	  return 0;
	}else{
		// Find a spot where A can pass B
	        for(i=A;i<D-1;i++) 
		{
		   if((S[i-1]=='.')&(S[i]=='.')&(S[i+1])=='.')
		   {
			   // check if can move A and B there
                           for(j=A;j<C;j++) if((S[j-1]=='#')&(S[j]=='#')) break;
			   printf("Yes\n");
			   return 0;
		   }
		}
		printf("No\n");
		return 0;
	   }
	return 0;
}
