#include <stdio.h>

int main (void){
    char ans[4];
    int a,b,c,d,e,k; 

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&k);
  
    if(e-a>k){
        ans[0] = ':';
        ans[1] = '(';
    }
    else{
        ans[0] = 'Y';
        ans[1] = 'a';
        ans[2] = 'y';
        ans[3] = '!';
    }

    printf("%s\n",ans);

    return 0;
}