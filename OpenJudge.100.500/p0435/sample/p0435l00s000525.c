#include <stdio.h>

int main() {
	long int n;
	long int r;
	long int count = 0;
	long int x,y;
	scanf("%ld %ld",&n,&r);
// 	printf("%d %d",n,r);
    
    for(int i=0;i<n;i++){
        scanf("%ld %ld",&x,&y);
        if(x*x+y*y<=r*r)
        count = count + 1;
    }
    
    printf("%ld",count);
	return 0;
}