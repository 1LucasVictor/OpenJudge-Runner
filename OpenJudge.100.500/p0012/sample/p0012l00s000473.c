#include<stdio.h>
int main(){
	int a,n=0;
	int low[10];
	for(;;){
		if(scanf("%d",&a)==EOF){break;}
		if(a==0){
			n--;
			printf("%d\n",low[n]);
		}
		else{
			low[n]=a;
			n++;
		}
	}
	return 0;
}