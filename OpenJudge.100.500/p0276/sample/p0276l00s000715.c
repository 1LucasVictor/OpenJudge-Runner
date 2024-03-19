#include<stdio.h>
int Adj[101][101];
int main(){
	int i,j;
    int n,a,b,c;	
    
    scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		scanf("%d%d",&a,&b);
		for(j=0;j<b;j++)
        {
			scanf("%d",&c);
			Adj[a][c]=1;
		}
	}

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>1)
            { 
                printf(" "); 
            }
			printf("%d",Adj[i][j]);
		}
		printf("\n");
	}


	return 0;
}

