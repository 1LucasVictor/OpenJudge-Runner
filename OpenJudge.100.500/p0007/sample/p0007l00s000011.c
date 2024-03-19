#include <stdio.h>

int main(){
	int a,b,c,d;
	int sum;
	int n;
	
	while(sum=0,scanf("%d",&n)!=EOF){
		for(a=0;a<=9;a++){
			for(b=0;b<=9;b++){
				for(c=0;c<=9;c++){
					for(d=0;d<=9;d++){
						if(a+b+c+d==n)
							sum++;
					}
				}
			}
		}
		printf("%d\n",sum);
	}
	
	return 0;
}