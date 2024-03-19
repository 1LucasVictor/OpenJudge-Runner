#include<stdio.h>

int main(){
	int max,n,i,result1,result;
	scanf("%d %d",&max,&n);
	for(i=0;i<n;i++){
		scanf("%d",&result1);
		result+=result1;
	}
	if(result>=max)printf("Yes");
	else printf("No");
	return 0;
}