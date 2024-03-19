#include<stdio.h>
int main(){
	int n,x,y,c;
	while(scanf("%d",&n)!=EOF){
		c=0;
		for(x=2;x<=n;x++){
			for(y=2;y<=x;y++){
				if(x%y==0){
					if(x==y)c++;
					break;
				}
			}
		}
		printf("%d\n",c);
	}

	return 0;
}