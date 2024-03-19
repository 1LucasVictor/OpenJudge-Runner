#include <stdio.h>
int main(void){
    // Your code here!
    long a,b,r,x;
    while(scanf("%ld %ld\n",&a,&b)!=EOF){
        r=a*b;
        for( ;b!=0;){
            x=a%b;
            a=b;
            b=x;
            
        }
        printf("%ld %ld\n",a,r/a);
    }
    
    return 0;
}

