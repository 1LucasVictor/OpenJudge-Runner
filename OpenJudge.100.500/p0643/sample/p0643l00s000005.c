#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define REP(i,n) for(i=0;i<n;i++)
#define ll long long

int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a%2==0 || b%2==0){
        printf("Even");
    } else{
        printf("Odd");
    }
    
    
    return 0;
}