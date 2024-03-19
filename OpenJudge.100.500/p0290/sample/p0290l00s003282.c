#include <stdio.h>

int main(void) {
	int a[10000],i,j,b,n,c;
	
	c = 0;
	
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
		b = a[i];
		for(j=2;j<b;j++){
			if(b%j == 0){
				c++;
				break;
			}
			
		}
	}	
	printf("%d\n",n-c);
	
	return 0;
}
