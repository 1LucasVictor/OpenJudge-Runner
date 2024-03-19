#include <stdio.h>
#include<math.h>
int main(void){
	int n;
	int a=100000;
	scanf("%d",&n);
	for(;n>0;n--){
		a*=1.05;
	}
	printf("%d\n",((a+9999)/10000)*10000);
  return 0;
}