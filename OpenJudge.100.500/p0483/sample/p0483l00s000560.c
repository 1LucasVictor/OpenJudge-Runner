#include<stdio.h>

int main(){
	int n;
    scanf("%d", &n);
	if(n/100 == 7){
        printf("Yes\n");
        return 0;
    }
    n %= 100;
    if(n/10 == 7){
        printf("Yes\n");
        return 0;
    }
    n %= 10;
   	if(n == 7){
    	printf("Yes\n");
    	return 0;
    }
    printf("No");
    return 0;
}
