  #include <stdio.h>

  int main(void)
  {

  int a,b,c,s;

  scanf("%d %d %d",&a,&b,&c);

  if(a < b){
    s = a;
    a = b;
    b = s;
    }
  if(b < c){
    s = b;
    b = c;
    c = s;
    }
  if(c < a){
    s = c;
    c = a;
    a = s;
    }

    printf("%d %d %d\n",a,b,c);

    return 0;

    }
     