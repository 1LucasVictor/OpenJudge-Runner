#include<stdio.h>
int main(){
	int N,D,x,y,n=0;
	scanf("%d %d",&N,&D);
	for(int i=0;i<N;i++){
		scanf("%d %d",&x,&y);
		if(x*x+y*y<=D*D)
		n++;
	}
	printf("%d\n",n);
}