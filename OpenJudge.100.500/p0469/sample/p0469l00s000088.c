#include <stdio.h>
   int main(int argc, const char * argv[]) {
        int a,b,k;
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
