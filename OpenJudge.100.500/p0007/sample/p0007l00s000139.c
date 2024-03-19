#include <stdio.h>

int main(void) {
	int n[50]={0},m,i,j,k,l,c=0;
	while(scanf("%d",&m)!=-1){
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				for(k=0;k<10;k++){
					for(l=0;l<10;l++){
						if (i+j+k+l==m)n[c]++;
					}
				}
			}
		}
		c++;
	}
	for(i=0;i<c;i++)printf("%d\n",n[i]);
	return 0;
}