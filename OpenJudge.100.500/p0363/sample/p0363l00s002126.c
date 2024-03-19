#include <stdio.h>
int main(void){
   int a,b,c,x,y,z;
scanf("%d %d %d",&a,&b,&c);
if(a>b){
x=b;
y=a;
z=c;

  if(b>c){
    x=c;
    y=b;
    z=a;
  }
  else if(a>c){
    x=b;
    y=c;
    z=a;
  }
}

if(a<b){
x=a;
y=b;
z=c;

  if(c<a){
    x=c;
    y=a;
    z=b;
  }
  else if(c<b){
    x=a;
    y=c;
    z=b;
  }
}

printf("%d %d %d\n",x,y,z);

return (0);
}

