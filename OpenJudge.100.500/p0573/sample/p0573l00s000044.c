#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
char str[4];
long long int t=0;
scanf("%s",str);

    if(str[0]==str[1] && str[2]==str[3])
    t++;
    if(str[0]==str[2] && str[1]==str[4])
    t++;
    if(str[0]==str[3] && str[1]==str[2])
    t++;
    
    if(t==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}