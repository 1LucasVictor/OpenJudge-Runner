#include <stdio.h>

int main()
{
char s[6];
scanf("%s",s);

int i,j;char t;

for(i=0;i<3;i++)
    for(j=i+1;j<4;j++)
        if(s[i]>s[j]){
            t = s[i];
            s[i] = s[j];
            s[j] = t;
        }

if(s[0] == s[1] && s[2] == s[3])
printf("Yes\n");
else 
printf("No\n");
}