#include<stdio.h>

int main(void){
	int n,i,jd=0,pn=0;
	
	while(scanf("%d", &n) != EOF){
			if(n>=2){
			while(n>=2){
				for(i=3;i<n;i++){
					if((n%2)==0){
						jd++;
						break;
					}else if((i%2)!=0){
						if((n%i)==0){
							jd++;
							break;
						}
					}
				}
				if(jd==0){
					pn=pn+1;
				}
				n--;
				jd=0;
			}
		}else{
			printf("Error!\n");
		}
	
		printf("%d\n",pn);
		pn=0;
	}
		
		return 0;
}