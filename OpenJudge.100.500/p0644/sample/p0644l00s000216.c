#include<stdio.h>
int main(void)
{
    char s[3];
  
    scanf("%s",s);
  
    int count = 0;
  
    if(s[0]=='1')	count++;
    if(s[1]=='1')	count++;
    if(s[2]=='1')	count++; 
  
    printf("%d",count);
  
    return 0;
}