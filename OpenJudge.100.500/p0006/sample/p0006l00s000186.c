#include<stdio.h>

	int main(){
	
		int i,j,n,x=100000,y[3]={},z;
		
		scanf("%d",&n);
	
		for(i=0;i<n;i++){
			x=x+x*5/100;
		
		z=x;
		
		for(j=0;j<3;j++){
			y[j]=z%10;
			z=z/10;
		}
	
		if(y[0]==0 && y[1]==0 && y[2]==0){
			x=x;
		}
		else if(y[0]+y[1]*10+y[2]*100 < 1000 && y[0]+y[1]+y[2]!=0){
			x=x/1000;
			x=x*1000+1000;
		}
		}
		
		printf("%d\n",x);
	
	return 0;
}