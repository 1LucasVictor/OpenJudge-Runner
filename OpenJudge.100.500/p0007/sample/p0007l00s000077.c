#include<stdio.h>

int main(void){
	int n;
	int i,j,z,y;
	int cnt=0;
	
	while(scanf("%d",&n)==1){
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				for(z=0;z<=9;z++){
					for(y=0;y<=9;y++){
						if(n==i+j+z+y)
							cnt++;
					}
				}
			}
		}
		printf("%d\n",cnt);
		cnt=0;
	}
	
	return 0;
}