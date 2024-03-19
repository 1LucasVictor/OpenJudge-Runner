#include <stdio.h>

#define INIT 0
#define PLUS 1
#define MINUS 2

int main(){
	int n,a,max,sum,plus,minus;
	int state;
	int i;
	while(scanf("%d",&n)>0){
		if(n==0)break;
		state=INIT;
		max=0;sum=0;plus=0;minus=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			//printf("%d:%d %s m:%d s:%d p:%d m:%d\n",i,a,(state==INIT)?"INIT":(state==PLUS)?"PLUS":"MINUS",max,sum,plus,minus);
			if(state==INIT){
				if(a<=0)continue;
				state = PLUS;
				plus = a;
			}else if(state==PLUS){
				if(a>=0)plus+=a;
				else{
					if(minus+plus>0){
						sum+=minus+plus;
					}else{
						if(max<sum)max=sum;
						sum=plus;
					}
					plus=0;
					minus=a;
					state=MINUS;
				}
			
			}else{
				if(a<=0)minus+=a;
				else{
					plus=a;
					state=PLUS;
				}
			}
		}
		if(state==PLUS&&minus+plus>0)sum+=minus+plus;
		if(max<sum)max=sum;
		printf("%d\n",max);
		
	}
	return 0;
}