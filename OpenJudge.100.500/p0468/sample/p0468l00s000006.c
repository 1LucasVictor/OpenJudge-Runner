#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define yes "Yes\n"
#define no "No\n"
//int m,n;
//int i,j,k,l;
//int a,b,c,d,e,f,g;
//int sum,total;
//long long int ;
//float ;
//double ;
//char a[101],b[101],s[101],t[101],u[101];
char a[6];
int main(void){
    scanf("%s",a);
    if (strcmp("ABC", a) == 0) {
        printf("ARC\n");
    } else if (strcmp("ARC", a) == 0) {
        printf("ABC\n");
    }
    
    return 0;
}