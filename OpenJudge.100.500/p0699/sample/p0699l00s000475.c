#include <stdio.h>

int main(){
	int a[3],c7=0,c5=0;
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	for(int i=0;i<3;i++){
		if(a[i]==5){
			c5++;
		}else if(a[i]==7){
			c7++;
		}
	}
	if(c7==1 && c5==2)printf("YES\n");
	else printf("NO\n");
	return 0;
}

