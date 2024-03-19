#include <stdio.h>

int main(void) {
	int a[100]={}, n[110]={}, i=0, j=0;
	
	while(scanf("%d", &a[i])!=EOF){
		if(a[i]!=0){
			n[j]=a[i];
			j++;
		}
		if(a[i]==0){
			printf("%d\n", n[j-1]);
			j--;
		}
		
		i++;
	}
	
	
	return 0;
}