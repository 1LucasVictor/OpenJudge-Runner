#include <stdio.h>
#define MAX 1000000007
int main(void){
    // Your code here!
    
    int A,B;
    
    scanf("%d %d\n",&A,&B);
    if(B==1) printf("0\n");
    else{
        int kosu = 1;
        int flag = 1;
        while(flag){
            if(kosu*A-(kosu-1) >= B) flag = 0;
            else                    kosu++;
        }
    
        printf("%d\n",kosu);
    }

    return 0;
}
