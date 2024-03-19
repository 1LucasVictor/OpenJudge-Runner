#include<stdio.h>
#include<string.h>
int main(){
	int m;
	int n5=0,n7=0;
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&m);
		if(m==5)
			++n5;
		if(m==7)
			++n7;
	}
	if(n5==2&&n7==1)
		printf("YES");
	else 
		printf("NO");
    return 0;
}