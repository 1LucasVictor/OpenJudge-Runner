#include<stdio.h>
 
int main(){

  int n,i,j;
  
  (void) scanf("%d",&n);
  
  int a[n];
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  for (i=0;i<n;i++)  
  {
    for (j=i+1;j<n;j++)
    {
       //printf("a[%d]=%d a[%d]=%d\n",i,a[i],j,a[j]);
      if (a[i]==a[j])
      {
        printf("NO");
        return 0;
      }
    }
        
  }
        
 printf("YES");      
 return 0; 
}