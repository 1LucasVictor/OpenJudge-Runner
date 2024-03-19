#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int a,g,n,i=0,date[10000],add=0;
	scanf("%d",&n);
	
	while(i != n){
		scanf("%d",&date[i]);
		add += date[i];
		++i;
	}
	
	g = 0;
	
	while(g != n){
		i = 0;
		while(i != n-1){
		
			if( date[i] > date[i+1]){
				a = date[i];
				date[i] = date[i+1];
				date[i+1] = a;
			}
			++i;
		}
		++g;
	}
	
	printf("%d %d %d\n",date[0],date[n-1],add);
	
	return 0;
}