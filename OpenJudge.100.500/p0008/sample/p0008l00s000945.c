#include<stdio.h>
int main(void){
	int n;
	int c=0,i,j;
		while(scanf("%d",&n)!=EOF){
		for(i=0;i<=n;i++){
			if(i<2){}
			else if(i==2){c++;}
			else if(i%2==0){}
			else if(i==3){c++;}
			else if(i==5){c++;}
			else{
				for(j=1;j<=n;j++){
					if(6*j+1==i||i==6*j+5){c++;}
				}
			}
		}
		printf("%d\n",c);
		c=0;
		}
	return 0;
}