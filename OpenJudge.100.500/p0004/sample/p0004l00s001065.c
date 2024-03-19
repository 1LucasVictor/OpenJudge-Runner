#include <stdio.h>

int main(void){
	int a,b;
	int maxa=0;
	int i,j,k;

	while(scanf("%d %d",&a,&b)!=EOF){
		for(i = 1,j = 1;1;){
			if(a*j>b*i){
				i++;
			}else if(a*j<b*i){
				j++;
			}else if(a*j == b*i){
				break;
			}
			
		}


		for(k = 1;1;){
			if(a % k == 0&&b % k == 0){
				maxa = k;
			}
			if(k > a/2 || k > b/2){
				break;
			}
			k++;
		}
		printf("%d %d\n",maxa,a*j);
				
	}
	return 0;
}