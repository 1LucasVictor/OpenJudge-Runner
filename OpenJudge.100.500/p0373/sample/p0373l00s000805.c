#include <stdio.h>
int main( void )
{
	int i=0,j,k,m,h[300],w[300];
	
	while(1){
		scanf("%d %d",&h[i],&w[i]);
		if(h[i]==0 && w[i]==0)
			break;
		i++;
	}
	
	for(k=0;k<i;k++){
		for(m=0;m<h[k];m++){
			for(j=0;j<w[k];j++){
					if(m == 0 || j == 0 || m == h[k]-1 || j == w[k]-1)
						printf("#");
					else
						printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}
}
