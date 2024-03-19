#include<stdio.h>
int main()
{
char a;
char b;
char c;
char d='R';

scanf("%c%c%c",&a,&b,&c);

if(b==d){printf("%c%c%c",a,'B',c);
}else{printf("%c%c%c",a,d,c);}

return 0;
}
