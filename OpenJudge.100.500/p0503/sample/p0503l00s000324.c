#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int compare(const void *a, const void *b)
 {
     return *(int *)b - *(int *)a;
 }
int main()
{
    int na= 0;
    int i;
    int a[200010];
    int b= 0;
    
    printf("\n");
    scanf("%d", &na);
  
    for(i=0; i<na; i++)
    {
        scanf("%d", &a[i]);
    }
            
    qsort(a, na, sizeof(int), compare);
        
    for(i=0; i<na; i++){
        if(a[i]==a[i+1])
        {
            b++;
        }
    }
        
    if(b==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
