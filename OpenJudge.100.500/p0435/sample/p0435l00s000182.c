#include <stdio.h>

int main() {
	int n;
	int r;
	int count = 0;
	int x,y;
	scanf("%d %d",&n,&r);
// 	printf("%d %d",n,r);
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x*x+y*y<=r*r)
        count = count + 1;
    }
    
    printf("%d",count);
	return 0;
}