#include <stdio.h>

void call(int n) {
int i,d;
//scanf("%d",&n);
for(i=1;i<=n;i++){
 if(i%3==0){
 printf(" %d",i);
}else
{
 d=1;
 while((i/d))
 {
  if((i%(10*d)-i%d)/d==3)
  {
    printf(" %d",i);
  }
  d=d*10;
 }
}
}
}

int main() {
int n;
scanf("%d",&n);
call(n);
printf("\n");
return 0;
}