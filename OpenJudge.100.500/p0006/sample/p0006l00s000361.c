#include <stdio.h>
int sum(int money,int week){
	int i;
	int x;
	for(i=0;i<week;i++){
		money=money+money*0.05;
		x=(float)(money/1000.0);
		if(x*1000!=money)money=x*1000+1000;
	}
	return money;
}

main(){
	int week,debt;
	scanf("%d",&week);
	debt=sum(100000,week);
	printf("%d\n",debt);
	return 0;
}