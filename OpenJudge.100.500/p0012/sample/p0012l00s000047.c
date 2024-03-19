#include<stdio.h>
int main(){
	int a=11,n=1,b[10],c[10],m=0,i;
	while(1){
		if(a==11){
			n=0;
		}
		scanf("%d",&a);
		if(a>0){
			b[n]=a;
			n++;
		}
		else{
			c[m]=b[n-1];
			b[n]=0;
			n--;
			m++;
		}
		if(n==0){
			break;
		}
	}
	for(i=0;i<m;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}