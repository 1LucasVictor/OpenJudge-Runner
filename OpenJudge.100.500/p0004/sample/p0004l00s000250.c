#include<stdio.h>
/* 二つの整数x,yの最大公約数を求める関数(x>=y)*/
int gcdf(int vx,int vy)
{
 return (!vy) ? vx : gcdf(vy,vx%vy);
}

/* 二つの整数x,yの最大公約数を求める関数(大きいほうを自動的に取り出すようにする。 */
int gcd(int vx,int vy)
{
 return (vx>vy) ? gcdf(vx,vy) : gcdf(vy,vx);
}

int main()
{
 int a,b;
 while(scanf("%d %d",&a,&b)!=EOF){
          printf("%d %d\n",gcd(a,b),(a/gcd(a,b))*b);
         }
return 0;
}