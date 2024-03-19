#include<stdio.h>


int gcd(int,int);

main()
{
 
  int x,y;
  scanf("%d%d",&x,&y);
  printf("%d\n",gcd(x,y));

}

int gcd(int x,int y){

  int r,k; 

  if(x < y ){
    k = y;
    y = x;
    x = k;
  }
  while(y > 0){
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}