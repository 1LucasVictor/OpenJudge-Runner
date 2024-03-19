#include <stdio.h>
int main (void){
	int a,b,c,m,n;
	n=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b){
		for(m=b;m<=a;m++){
			if(c%m==0){
				n++;
			}
			}
			}
	else{
		for(m=a;m<=b;m++){
			if(c%m==0){
				n++;
			}
			}
			}
    printf("%d\n",n );

			return 0;
}