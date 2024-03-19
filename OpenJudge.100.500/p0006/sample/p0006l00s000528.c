#include <stdio.h>

int risi(int a){
	if(a==0){
		return 100000;
	}else{
		double b=(double)risi(a-1)*1.05;
		if(((int)b%1000)!=0){
			b-=(int)b%1000;
			b+=1000;
		}
		return (int)b;
	}
}

int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",risi(a));
	return 0;
}