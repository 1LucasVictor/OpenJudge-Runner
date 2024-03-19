#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,p=0;
   scanf("%d %d",&n,&m);
  int i,a,b;
  for(i=1;i<=n;i++){
       int ans;
    scanf("%d %d",&a,&b);
    ans = sqrt((a*a)+(b*b));
  if(ans==m){
        p++;
  }
  }
  printf("%d",p);
  return 0;
}
