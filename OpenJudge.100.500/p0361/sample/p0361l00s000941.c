#include <stdio.h>
int main()
{
int S, b, s, h, m;
scanf("%d", &S);
b = S/60;
s = S%60;
h = b/60;
m = b%60;
if(S>=0 && S<=86400)
{ 
printf("%d:%d:%d\n", h, m, s);
}

return 0;
}

