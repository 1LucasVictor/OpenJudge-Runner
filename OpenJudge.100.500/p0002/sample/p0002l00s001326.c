#include<stdio.h>
int main(void)
{int n,a,b,c,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
      puts("YES");
    else
      puts("NO");
  }

  return(0);

}