#include <stdio.h>

int main()
{
int a, b, c, d;
int t;

scanf("%d%d%d%d",&a,&b, &c, &d);

if(b <= c || d <=a ){
  t = 0;
}
else {
  if(a <=c){
    if(b <=d){
      t = b - c;
    }
    else{
      t = d-c;
    }
  }
  else{
    if(b <=d){
      t = b - a;
    }
    else{
      t = d-a;
    }
  }
}


  printf("%d\n", t);

return 0;
}
