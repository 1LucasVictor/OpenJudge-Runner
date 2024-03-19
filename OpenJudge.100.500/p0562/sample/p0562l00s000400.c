#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a,b;
	int flag=0;
	int ans1,ans2;

	scanf("%d%d",&a,&b);

	ans1 = b-a;
	if(ans1<0){
		printf("1\n");
	}else{
		ans2 = ans1/(a-1)+1;
		printf("%d\n", ans2);
	}	
}
