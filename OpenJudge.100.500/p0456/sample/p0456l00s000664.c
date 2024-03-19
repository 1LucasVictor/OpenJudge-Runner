#include <stdio.h>
#include<string.h>
     
int main(void) 
{int a,i,b=0;char s[200000],t[200000];
scanf("%s",s);
scanf("%s",t);
a = strlen(s);
for(i=0;i<a;i++){
    if(s[i]!=t[i]){b++;}
    	}
printf("%d",b);
return 0;
}