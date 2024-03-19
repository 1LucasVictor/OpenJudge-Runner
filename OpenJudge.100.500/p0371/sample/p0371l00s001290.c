#include <stdio.h>

int main (void){
	int n;
	int a[10000];
	int min =  1000000;
	int max = -1000000;
	int sum = 0;
	
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
	if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
		sum+=a[i];
	}
	
	printf("%d %d %d\n",min ,max ,sum);
	return 0;
}