#include <stdio.h>

int abs(int b){
	return b>0 ? b : -b;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if((a-b)%2==0){
		printf("%d\n",abs((a-b)/2)+((a>b) ? b : a));
	}else{
		printf("IMPOSSIBLE\n");
	}
	return 0;
}