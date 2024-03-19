#include<stdio.h>
int main(){
	int n5,n7,C;
	n5 = n7 = 0;
	for(int i = 0;i < 3;i++){
        scanf("%d",&C);
	    if(C==5) n5++;
        if(C==7) n7++;
	}
	if(n5==2&&n7==1) printf("YES\n");
    else printf("NO\n");
	return 0;
}
