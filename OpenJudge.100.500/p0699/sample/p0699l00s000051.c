#include<stdio.h>
int main(void){
	int a;
	int x=0,y=0;
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&a);
		if(a==5){
			x++;
		}else if(a==7){
			y++;
		}
	}
	if(x==2&&y==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
