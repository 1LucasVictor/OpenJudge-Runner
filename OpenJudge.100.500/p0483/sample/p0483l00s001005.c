#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int n,a,b,c;

scanf("%d",&n);

a = n%10;
n = n/10;
b = n%10;
n = n/10;
c = n%10;

if(a!=7&&b!=7&&c!=7)
{
    printf("No");
    return 0;
}

printf("Yes");

return 0;

}