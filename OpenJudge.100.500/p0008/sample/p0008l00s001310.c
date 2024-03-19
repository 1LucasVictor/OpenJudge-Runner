#include<stdio.h>

int prime(int a){
	
	int i,count,p;
	count = 0;
	for(i=1;i<=a;i++){
		if(a%i == 0){
			count += 1;
		}
		
		if(count == 2){
		p = 1;
		}else{
		p = 0;
		}
	}
	return (p);
}

int main (void){
	
	int i,num,sosuu;
	while(scanf("%d",&num) != EOF){
	sosuu = 0;
		for(i=1;i<=num;i++){
			sosuu += prime(i);
		}
	printf("%d\n",sosuu);
	}
	return 0;
}
	