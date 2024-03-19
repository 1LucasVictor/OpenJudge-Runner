#include <stdio.h>

int main()
{
	int n,i,a;
	int S[13]={0};
	int H[13]={0};
	int C[13]={0};
	int D[13]={0};
	char m;
	
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++){
		scanf("%c %d\n",&m,&a);
		
		if(m=='S')
			S[a-1]=1;
		else if(m=='H')
			H[a-1]=1;
		else if(m=='C')
			C[a-1]=1;
		else if(m=='D')
			D[a-1]=1;
			
	}
	
	for(i=0;i<13;i++)
		if(S[i]==0)
			printf("S %d\n",i+1);
			
	for(i=0;i<13;i++)
		if(H[i]==0)
			printf("H %d\n",i+1);
			
	for(i=0;i<13;i++)
		if(C[i]==0)
			printf("C %d\n",i+1);
			
	for(i=0;i<13;i++)
		if(D[i]==0)
			printf("D %d\n",i+1);
			
	return 0;
	
}
