#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c>=b){
		printf("0\n");
	}
	if(c<b){
		if(c>a&&b<d)printf("%d\n",b-c);
		if(c>a&&b>d)printf("%d\n",d-c);
		if(c<a&&b<d)printf("%d\n",b-a);
		if(c<a&&b>d)printf("%d\n",d-a);
	} 
	return 0;
}