#include <stdio.h>

int main(void)
{
  int a[1000],b[1000],c[1000],n,i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d%d%d",&a[i],&b[i],&c[i]); 
  for(i=0;i<n;i++){
    if(a[i]==(b[i]*b[i]+c[i]*c[i])/a[i]||b[i]==(c[i]*c[i]+a[i]*a[i])/b[i]||c[i]==(a[i]*a[i]+b[i]*b[i])/c[i])
      printf("YES\n");
    else
      printf("NO\n");
  }
  return(0);
}

  