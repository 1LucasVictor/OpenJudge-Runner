#include <stdio.h>
int main(void){
    // Your code here!
    int For,n,Na[101],Gu,Wa;
    
    scanf("%d",&n);
    
    for(For=0;For<n;For++)
        scanf("%d",&Na[For]);
        
    Gu = Wa = 0;
    for(For=0;For<n;For++){
        if((Na[For] % 2) == 0){
            Gu++;
            if(((Na[For]) % 3 == 0) || (Na[For] % 5) == 0)
                Wa++;
        }
    }
    
    if(Wa == Gu) printf("APPROVED\n");
    else         printf("DENIED\n");
    
    return 0;
}
