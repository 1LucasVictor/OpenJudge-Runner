#include <stdio.h>
main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
  
  int f=0;
  for(int i=0; i<n; i++){
    if((a[i]%2==0 && a[i]%3!=0) && (a[i]%2==0 && a[i]%5!=0)) f=1;
  }
  
  if(f==0) printf("APPROVED");
  else printf("DENIED");
  return 0;
}
