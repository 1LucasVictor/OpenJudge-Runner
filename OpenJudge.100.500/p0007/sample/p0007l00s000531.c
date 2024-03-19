#include<stdio.h>

int main(){
	int n;
	int m;
	int a,b,c,d;
	int result;
	while(scanf("%d",&n)!=EOF){
		result = 0;
		if(n>36){
			printf("0\n");
		}
		if(n>9){
			m = 10;
		}else{
			m = n+1;
		}
		for(a=0;a<m;a++){
			for(b=0;b<m;b++){
				for(c=0;c<m;c++){
					for(d=0;d<m;d++){
						if(a+b+c+d==n){
							result += 1;
							continue;
						}
					}
				}
			}
		}
		printf("%d\n",result);
	}
	return 0;
}