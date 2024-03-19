#include<stdio.h>
 
int main()
{   
    int a, b;
    int count = 1;
    while(scanf("%d %d", &a, &b) != EOF){
 
        a= a + b;
        while(a>= 10){
            a/= 10;
            count++;
        }
        printf("%d\n", count);
        count = 1;
    }
 
 
    return 0;
}