#include <stdio.h>

int main(){
	int N,flag=1;
	scanf("%d",&N);
	
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		if( a[i]%2==0 && a[i]%3!=0 && a[i]%5!=0 ){
			flag = 0;
			break;
		}
	}
	
	if( flag ) printf("APPROVED");
	else printf("DENIED");
	
	return 0;
}