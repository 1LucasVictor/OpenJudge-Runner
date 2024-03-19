#include<stdio.h>
#include<stdlib.h>

int cmp( const void *p, const void *q ) {
    return *(int*)p - *(int*)q;
}
 
int main(){

  int n,size,i,j;
  
  (void) scanf("%d",&n);
  
  int a[n];
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);    
  }
  
  qsort(a, n, sizeof(int), cmp);
  
	for (i=0;i<n;i++)
    {
    	if (a[i]==a[i+1])
        {
         printf("NO");
          return 0;
        }
    
    
    }
  
  
  
  
  /*for (i=0;i<n;i++)  
  {
    for (j=i+1;j<n;j++)
    {
       printf("a[%d]=%d a[%d]=%d\n",i,a[i],j,a[j]);
      if (a[i]==a[j])
      {
        printf("NO");
        return 0;
      }
    }
        
  }*/
        
 printf("YES");      
 return 0; 
}