#include <stdio.h>
   int main() {
        int  a,b,k;
     fflush(0);
        scanf("%d %d",&a, &b);
        scanf("%d" ,&k);
        
    int s,t;
        s = a%k; t = b%k;
        if(s == t){
            printf("NG");
        }
    else{
            printf("OK");
    }
}