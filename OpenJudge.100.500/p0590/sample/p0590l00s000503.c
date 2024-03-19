#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))
#define FOR(i,m,n) for(i=m;i<n;i++)

int main(void)
{
	int a[10],b=0,c=0,i;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
		if(i<5){
			b=max(b,a[i]);
			c=min(c,a[i]);
		}
	}
	if(b-c<=a[5]){
		printf("Yay!");
	}else{
		printf(":(");
	}
	return 0;
}