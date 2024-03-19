#include<stdio.h>
int main(){
    long a,b,c;

    scanf("%ld %ld",&a,&b);
    c=a+b;

    if(c<=a-b){
            c=a-b;
    }
    if(c<=a*b){
         c=a*b;
    } 
    
    printf("%ld\n",c);
    return 0;
}