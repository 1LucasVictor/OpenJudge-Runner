#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,A,B,C,D;
	char S[200005];
	int locations[200005];
	int i,j;
	int maxDC;
	int spaces=0;
	int count=0;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	scanf("%s",&S);
	for(i=0;i<N;i++) locations[i]=0;
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
		maxDC=D;
		if(C>D) maxDC=C;
		// Find a spot where A can pass B
	        for(i=0;i<N-1;i++) 
		{
		   if((S[i]=='.')&(S[i+1]=='.')&(S[i+2])=='.')
		   {
			   spaces=1; 
			   locations[count++]=i;
			   // if the space is before A
			   if(i<A)
			   {
				   // check if can move A and B there
				   for(j=i;j<maxDC;j++) if((S[j-1]=='#')&(S[j]=='#')) break;
				   printf("Yes\n");
				   return 0;
			   }
			   // if the space is between A and B
			   if((i>=A)&(i<=B))
			   {
				   // check if can move A and B there
                                   for(j=A;j<B;j++) if((S[j-1]=='#')&(S[j]=='#')) break;
				   printf("Yes\n");
				   return 0;
			   }
			   // if the space is after B
			   if((i>B)&(maxDC>i))
			   {
				   for(j=A;j<maxDC;j++) if((S[j-1]=='#')&(S[j]=='#')) break;
                                   printf("Yes\n");
                                   return 0;
                           }
                           if((i>B)&(maxDC<=i))
                           {
                                   for(j=A;j<i;j++) if((S[j-1]=='#')&(S[j]=='#')) break;
                                   printf("Yes\n");
                                   return 0;
                           }
		   }
		}
		printf("No\n");
		return 0;
	   }
	return 0;
}
