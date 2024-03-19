#include <stdio.h>

int main(){
	int i, n, c;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			if((a[i]%3!=0)&&(a[i]%5!=0)){
				c = 1;
				break;
			}
		}
	}
	if(c==1) printf("DENIED");
	else printf("APPROVED");
}
