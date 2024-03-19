#include<stdio.h>
int main(void)
{
    char S[5];
    int i=0;
  
    scanf("%s",S);
    
    if(S[0]==S[1]) i++;
    if(S[0]==S[2]) i++;
    if(S[0]==S[3]) i++;
    
    if(i!=1) { printf("No\n"); return 0; }
    else i=0;
  
    if(S[1]==S[0]) i++;
    if(S[1]==S[2]) i++;
    if(S[1]==S[3]) i++;
  
    if(i!=1) { printf("No\n"); return 0; }
    else i=0;
  
    if(S[2]==S[0]) i++;
    if(S[2]==S[1]) i++;
    if(S[2]==S[3]) i++;
    
    if(i!=1) { printf("No\n"); return 0; }
    else i=0;
  
    if(S[3]==S[0]) i++;
    if(S[3]==S[1]) i++;
    if(S[3]==S[2]) i++;
    
    if(i!=1) printf("No\n");
    else printf("Yes\n");
  
    return 0;
}