#include<stdio.h>
main(){
	int a,b,temp1,temp2,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){
		if(a<c)
		temp1=c;
		else
		temp1=a;
		if(b<d)
		temp2=b;
		else
		temp2=d;
		if(temp2-temp1<=0)
		printf("0\n");
		else
		printf("%d\n",temp2-temp1);
	}
}