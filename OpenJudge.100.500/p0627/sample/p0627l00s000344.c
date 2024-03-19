#include <stdio.h>

int main(void) {
    int a,b,X,Y,Z;
	
	scanf("%d %d",&a,&b);
    X = a + b;
    Y = a - b;
    Z = a * b;
    if(X >= Y){
        if(X >= Z){
            printf("%d",X);
        }else{
            printf("%d",Z);
        }
    }else if(Y >= Z){
        printf("%d",Y);
    }else{
        printf("%d",Z);
    }
	return 0;
}

