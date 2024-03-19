#include<stdio.h>

int main(void){
	int a,b,x,y;
	int i,k,r;
	while((scanf("%d %d",&a,&b))!=EOF){
		if(a>b){
			k = a%b;
		}else{
			k = b%a;
		}
		if(k == 0){
			if(a>b){
				x = b;
			}else{
				x = a;
			}
		}else{
			for(i=1;i<k+1;i++){
				if(k%i == 0){
					r = k/i;
					if(a%r == 0 && b%r == 0){
						x = r;
						break;
					}
				}

			}
		}
		y = a * (b/x);
		printf("%d %d\n",x,y);
	}
	return 0;
}