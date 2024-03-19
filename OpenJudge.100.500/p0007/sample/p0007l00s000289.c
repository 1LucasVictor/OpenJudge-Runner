#include <stdio.h>

int main(void){
  int data[37];
  int n;
  int a,b,c,d,e;

  for( a=0;a<37;a++ ) data[a]=0;

  for(a=0;a<10;a++)
    for(b=0;b<10;b++)
      for(c=0;c<10;c++)
        for(d=0;d<10;d++){
          e=a+b+c+d;
          if( e<37 ) data[e]++;
        }

  while( 1 ){
    if( scanf("%d ",&n)!=1 )
      break;
    if( n<37 )
      printf("%d\n",data[n]);
    else
      printf("0\n");
  }

  return 0;
}