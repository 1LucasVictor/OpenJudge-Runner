#include <stdio.h>
int main(void){
    // Your code here!
    //猫A　犬or猫B 猫がちょうど猫Xいることはありえるか
    //A B X
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    
    if(A>X){
        printf("NO");
        return 0;
    }
    if((A+B)<X){
        printf("NO");
        return 0;
    }

    printf("YES");
    
    return 0;
    
}
