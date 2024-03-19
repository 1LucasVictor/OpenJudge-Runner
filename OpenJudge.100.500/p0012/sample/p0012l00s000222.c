
#include <stdio.h>
#include <math.h>

int main(void) {
	
	int n,a[10],num=0;
	
	while(scanf("%d",&n)!=EOF){
		if(n==0 && num>0){
			num--;
			printf("%d\n",a[num]);
		}
		else{
			a[num]=n;
			num++;
		}
	}

	return 0;
}