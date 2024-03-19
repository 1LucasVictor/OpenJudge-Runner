#include <stdio.h>
    
int main(void)
{
char str[1001], p[1001], cmd[10];
int a, b, q;
    
scanf("%s", str);
    
scanf("%d", &q);
    
while (q > 0)
{
scanf("%s", cmd);
scanf("%d", &a);
scanf("%d", &b);
if (cmd[0] == 'p')
{
 while (a <= b)
 {
 putchar(str[a]);
 a++;
 }
 putchar('\n');
    
} else if (cmd[2] == 'v')
{
 while (a < b)
 {
  p[0] = str[a];
  str[a] = str[b];
  str[b] = p[0];
  a++;
  b--;
 }
} else {
 scanf("%s", p);
 while (a <= b)
 {
  str[b] = p[b - a];
  b--;
 }
}
q--;
}
    
return 0;
}
