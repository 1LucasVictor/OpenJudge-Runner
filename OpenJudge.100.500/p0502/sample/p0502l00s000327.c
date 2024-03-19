#include <stdio.h>

int main(void)
{
	int a[1000], n, i, frag=0;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		if(a[i] % 2 ==0){
			if(a[i] % 3 == 0 || a[i] % 5 == 0){
			}else{
			frag=1;
			}
		}
	}
	
	if(frag==0) printf("APPROVED\n");
	else{
	printf("DENIED\n");
	}
	return 0;
}