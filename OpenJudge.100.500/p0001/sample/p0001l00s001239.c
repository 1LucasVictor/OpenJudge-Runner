#include<stdio.h>
 
int main(){
    int a, b, ab, count;
     
    while( scanf("%d %d", &a, &b) != EOF ){
        ab = a + b;
	count = 0;
         
        while( ab > 0 ){
            ab /= 10;
            count++;
        }
         
        printf("%d\n", count);
    }
     
	return 0;
}