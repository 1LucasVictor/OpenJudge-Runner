#include <stdio.h>
#include <math.h>

int main(void){
    //input
    int A;
    scanf("%d", &A);
    int B;
    scanf("%d", &B);

    //calcu
    // int Ans=0;
    // Ans = B / A + 1;

    // if(1<=B && B<=A)
    // Ans = 1;
    int Ans=0;
    while((A-1) * Ans <= B){
        Ans += 1;
    }
    Ans -= 1;

    //output
    printf("%d\n",Ans);
    return 0;    
}
