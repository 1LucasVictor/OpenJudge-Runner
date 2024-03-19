#include <stdio.h>

int main(void){
    int  For,MoH,Syu,Waz[100001],Gou;
    
    scanf("%d%d",&MoH,&Syu);
    
    for(For=0;For<Syu;For++)
        scanf("%d",&Waz[For]);
        
    Gou = 0;
    for(For=0;For<Syu;For++)
        Gou += Waz[For];
    
    if((MoH - Gou) <= 0)
        printf("Yes\n");
    else printf("No\n");
    
    return 0;
}