#include <stdio.h>

int main(){
	int h[10000];
	int x,a,b,c,d,i,j,cnt;
	while(scanf("%d",&x)!=-1){
	i=cnt=0;
		for(a=0;a<=9;a++){				
			for(b=0;b<=9;b++){
				for(c=0;c<=9;c++){
					for(d=0;d<=9;d++){
						h[i]=a+b+c+d;
						i++;
					}
				}
			}
		}
		for(j=0;j<i;j++){
			if(h[j]==x) cnt++;
		}
			printf("%d\n",cnt);
	}
	return 0;
}