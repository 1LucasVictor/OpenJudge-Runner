#include<stdio.h>
 
int main(void){
    char S[20];
    char T[20];
    int i,f;
 
    f=1;
 
  for(i=0;i<20;i++){
        S[i]= 0;
        T[i]= 0;
    }

    scanf("%s",&S);
    scanf("%s",&T);
 
    for(i=0;S[i]!=0;i++){
        f=f*(S[i] == T[i]);
    }
 
    if(f)
        printf("Yes");
    else
    {
        printf("No");
    }
    
 
    return 0;
}