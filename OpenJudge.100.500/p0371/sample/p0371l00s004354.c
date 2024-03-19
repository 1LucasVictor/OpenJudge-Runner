#include <stdio.h>
int main(void)
{
    int n,i;
    int a[1000] = {};
    int min,max;
    int sum = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    min = a[0];
    for(i=0;i<n;i++){
       if(min>a[i]) min = a[i];
    }
    max = a[0];
    for(i=0;i<n;i++){
       if(max<a[i]) max = a[i];
    }    

    for(i=0;i<n;i++){
      sum += a[i];
    }
    
    printf("%d %d %d\n",min,max,sum);
    return 0;
}