#include <stdio.h>
//#include <math.h>
int main(){
	int n,a,b,c,d,ans;
	while(scanf("%d",&n)!=EOF){
		ans=0;
		for(a=0; a<=9; a++){
			for(b=0; b<=9; b++){
				for(c=0; c<=9; c++){
					for(d=0; d<=9; d++){
						if(a+b+c+d==n)ans+=1;
					}
				}
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}