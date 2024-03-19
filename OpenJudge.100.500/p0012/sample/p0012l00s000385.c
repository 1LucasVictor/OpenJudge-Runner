#include <stdio.h>
#include <math.h>



int main(){
	int a[14];
	int i=0,n;
	while (scanf("%d",&n)!=EOF){
		if(n==0){
			i--;
			printf("%d\n",a[i]);
		}else{
			a[i]=n;
			i++;
		}
	}

	return 0;
}