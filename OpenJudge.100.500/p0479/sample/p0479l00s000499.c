#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
  int i,n,a;
  int s[200000]={0};
  scanf("%d",&n);
  for(i=0;i<n-1;i++){
    scanf("%d",&a);
    s[a-1]++;
  }
  for(i=0;i<n;i++)
    printf("%d\n",s[i]);
	return 0;
}
