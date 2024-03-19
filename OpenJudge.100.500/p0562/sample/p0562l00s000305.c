#include <stdio.h>
int main(){
	int a,b;
	int tap=1, c=0;
	scanf("%d %d",&a,&b);
	
	while(tap < b){
		tap = tap + a -1;
		c++;
	}
	
	printf("%d\n",c);
	return 0;
}