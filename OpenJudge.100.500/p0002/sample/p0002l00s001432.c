#include <stdio.h>

void swap(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

int main (){
	int i,n,x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x,&y,&z);
		if(z<x)swap(&x,&z);
		if(z<y)swap(&y,&z);
		if(x*x+y*y==z*z)printf("YES\n"); else printf("NO\n");
	}
	return 0;
}