#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(y>=2*x && 4*x>=y){
        printf("Yes");
    }
    else{
        printf("No");
    }
	return 0;
}