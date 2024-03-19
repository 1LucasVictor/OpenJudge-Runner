#include <stdio.h>
int main(void){
    int a=0;
    scanf("%d",&a);
    //printf("a=%d\n",a);
    
    
    //素因数分解できるかを9から調べる
    int waretakazu=0;
    int i=0;
    for(i=9;i>=2;i--){
        if(a%i==0){
            waretakazu++;
            a=a/i;
           // printf("i=%d,a=%d\n",i,a);
        }
        
    }
    //printf("waretakazu=%d\n",waretakazu);
    
    if(waretakazu<=2&&a==1){
        printf("Yes");
    }else{
        printf("No");
    }
}
