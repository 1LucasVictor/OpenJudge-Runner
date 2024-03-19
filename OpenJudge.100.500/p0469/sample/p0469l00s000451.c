//https://atcoder.jp/contests/abc165/tasks/abc165_a
#include <stdio.h>

int main() {
    
    int a, b, k, i;
    
    int c[2000];
    
    scanf("%d", &k);
    printf("\n");
    
    scanf("%d %d", &a, &b);
    
    c[0]= a;
    
    if(b-a+1>k||b-a+1==k||a%k==0||b%k==0)
        printf("OK");
    else{
        for(i=1; i<=b-a+1; i++){
            c[i]= c[i-1]+1;
            //printf("繰り返し : %d\n", c[i]);
            
            if(c[i]%k==0&&i<b-a+1){
                printf("OK");
                break;
            }
            else if(i==b-a+1){
                printf("NG");
            }
        }
    }
    
    return 0;
}
