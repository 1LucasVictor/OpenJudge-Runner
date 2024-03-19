#include<stdio.h>

int main(void){
	int d=0;
	int a[3];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	for(int i=0;i<3;i++){
		if(a[i]==5||a[i]==7){
			d+=a[i];
		}
	}
	if(d==17){
		printf("YES");
	}else{
		printf("NO");
	}
}