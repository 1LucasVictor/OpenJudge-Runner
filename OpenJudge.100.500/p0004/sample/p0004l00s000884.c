#include <stdio.h>

int gcdlcm(int a,int b,int c){
	int r=a;int sum=1;
	while(1){
		if(a%r==0 && b%r==0){
			a/=r;b/=r;sum*=r;
		}
		else r--;
		if(r==1)
			break;
	}
	if(c==0)return sum;
	else return  sum*a*b;
}




int main(void){
	int temp=0,a,b;
	while(scanf("%d%d",&a,&b) != EOF){
		if(a>b){
			temp=a;
			a=b;
			b=temp;
		}
printf("%d %d\n",gcdlcm(a,b,0),gcdlcm(a,b,1));
		}
		return 0;
}