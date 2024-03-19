#include <stdio.h>

int main(void)
{
	int n,x,i,j,k;
	int c=0;

	scanf("%d %d", &n, &x);
	for(i=1;i<n-1;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n+1;k++){
				if(i+j+k==x){
					c++;
				}
			}
		}
	}
	printf("%d\n", c);
		return 0;
}