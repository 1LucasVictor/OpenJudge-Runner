#include <stdio.h>
#include <string.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>


int main(void)
{	
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(b<=c || d<=a){
		printf("0\n");
	} else if(c<b && b<=d &&a<c){
		printf("%d\n",b-c);
	} else if(a<d && d<=b &&c<a){
		printf("%d\n",d-a);
	} else if(a<=c && d<=b){
		printf("%d\n",d-c);
	} else {
		printf("%d\n",b-a);
	}
	return 0;
}
