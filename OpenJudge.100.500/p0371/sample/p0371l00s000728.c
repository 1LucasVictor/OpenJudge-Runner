#include <stdio.h>
int main(void){
    int n, a, i, min, max;
    long long int s = 0;
    min = 1000000;
    max = -1000000;
    scanf("%d",&n);
    for(i=0; i<n; i++){
    	scanf("%d",&a);
    	s += a;
       	if(a<min){
       		min=a;
       	}
       	if(a>max){
       		max=a;
       	}
   }
	printf("%d %d %lld\n",min, max, s);
	return 0;
}
