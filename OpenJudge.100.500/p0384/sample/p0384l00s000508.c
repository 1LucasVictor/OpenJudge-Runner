#include <stdio.h>
int main(void)
{
char x[1300];
char v;
int i = 0;
 int k;
while(1)
{
scanf("%c",&v);
 
if(v == '\n')
break;
 
else if('a' <= v && v <= 'z')
v -= 32;
else if('A' <= v && v <='Z')
v += 32;
 
x[i] = v;
i++;
}

for(k = 0; k < i; k++){
 
printf("%c",x[k]);
}
printf("\n");
 
return 0;
}