#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
    
    int i,k;
	int n,m;
	int a[100][100];
	int b[100];
	int c[100];
	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			scanf("%d",&a[i][k]);
		}
	}
	
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			c[i] = c[i] + b[k]*a[i][k];
		}
		printf("%d",c[i]);
		if(i<n-1){
			printf("\n");
		}
	}
	
	
	return 0;
}