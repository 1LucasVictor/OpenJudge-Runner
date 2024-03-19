#include<stdio.h>
#include<math.h>

int main(void)
{
int x=0;
char a[5];
fgets(a,5,stdin);

   
if(a[0]==a[1])
{
x=x+1;
}
   
if(a[0]==a[2])
{
x=x+1;
}
   
if(a[0]==a[3])
{
x=x+1;
}
   
if(a[1]==a[2])
{
x=x+1;
}
   
if(a[1]==a[3])
{
x=x+1;
}
   
if(a[2]==a[3])
{
x=x+1;
}

  
  
if(x==2)
{
printf("Yes");
}else
{
printf("No");
}

return 0;
}