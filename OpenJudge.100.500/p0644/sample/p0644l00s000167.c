#include <stdio.h>

int main (void){
    int i,j; 
    char n[3]={0};
    int ans = 0;
   
    scanf("%s",n);
    if((n[0]-'0')==1){
        ans++;
    }
    if((n[1]-'0')==1){
        ans++;
    }
    if((n[2]-'0')==1){
        ans++;
    }
    printf("%d\n",ans);
    
    

    
    return 0;
}