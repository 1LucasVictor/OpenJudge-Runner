#include <stdio.h>

int main(void) {
	int n,a[3],b;
	
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		for(int i=0;i<2;i++){
			if(a[i]>a[i+1]){
				b=a[i];
				a[i]=a[i+1];
				a[i+1]=b;
			}
		}
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}