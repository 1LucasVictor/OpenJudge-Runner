#include <stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);

if((a==7&&b==5&&c==5)||(b==7&&a==5&&c==5)||(c==7&&b==5&&a==5))
printf("YES");
else
printf("NO");



return 0;  
}