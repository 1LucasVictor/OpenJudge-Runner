#include <stdio.h>

#define INIT 0
#define PLUS 1
#define MINUS 2

int main(){
	long n,a,max,sum,plus,minus;
	int state;
	int i;
	while(scanf("%ld",&n)>0){
		if(n==0)break;
		state=INIT;
		max=0;sum=0;plus=0;minus=0;
		for(i=0;i<n;i++){
			scanf("%ld",&a);
			//printf("  %s m:%ld s:%ld p:%ld m:%ld\n",(state==INIT)?"INIT":(state==PLUS)?"PLUS":"MINUS",max,sum,plus,minus);
			//printf("input%d:%ld\n",i,a);
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
		if(max<plus)max=plus;
		printf("%ld\n",max);
		
	}
	return 0;
}