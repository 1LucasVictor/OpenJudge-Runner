#include <stdio.h>

int main(void) {
	int a[3],i=0,c7=0,c5=0;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<3;i++){
		if(a[i]==7)c7++;
		else if(a[i]==5)c5++;
		else;
	}
	
	if(c7==1 && c5==2) printf("YES");
	else printf("NO");
	return 0;
}