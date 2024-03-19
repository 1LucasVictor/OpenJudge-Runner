#include <stdio.h>

int main(void) {
	// your code goes here
	int a,n;
	int approve=1;
	
	scanf("%d",&n);
	
	while(n--){
		scanf("%d",&a);
		if(a%2==0){
			if(a%3!=0&&a%5!=0)
				approve=0;
				
		}
	}
	
	if(approve==0)
		printf("DENIED");
	else
		printf("APPROVED");
	return 0;
}
