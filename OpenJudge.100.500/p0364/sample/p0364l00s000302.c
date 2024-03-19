#include<stdio.h>
int main(){
	int W,H,x,y,r,Y,T;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	Y=W-(x+r);
	T=H-(y+r);
	
		if((0<Y)&&(0<T)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		
	 return 0;
}