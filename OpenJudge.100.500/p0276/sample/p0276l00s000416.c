#include<stdio.h>
int main(void){
    int n,u,k,v;
    int i,j;
    int M[100][100]={0};
    
    scanf("%d",&n);

    for(i=0;i<n;i++){
	scanf("%d%d",&u,&k);
	for(j=0;j<k;j++){
	    scanf("%d",&v);
	    v--;
	    M[i][v]=1;
	}
    }

    for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	    if(j) printf(" ");
	    printf("%d",M[i][j]);
	}
	printf("\n");
    }

    return 0;
}