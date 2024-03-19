#include<stdio.h>
int main(){
	int a,b,ss,i,max,cc=0;
	scanf("%d%d",&a,&b);
	if(a>b)ss=a;
	else ss=b;
	for(i=1;i<=ss;i++){
		if(a%i==0 && b%i==0){
			if(cc==0)max=i;
			else if(max<i)max=i;
		}
	}
	printf("%d\n",max);
	return 0;
}
