#include<stdio.h> 
#include<string.h>
int main()
 {
     char s[20001],t[20001]; 
    int l,i,count=0; 
    scanf("%s%s",s,t); 
    l=strlen(s);
    for(i=0;i<l;i++) { 
        if(s[i]==t[i]) { continue; }
         count++;} 
    printf("%d\n",count); 
    return 0; }
