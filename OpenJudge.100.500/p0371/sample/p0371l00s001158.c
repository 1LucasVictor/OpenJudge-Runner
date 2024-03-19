#include <stdio.h>
int main()
{
    int n , i;
    int a[10000];
    long int min = 1000000, max = -1000000, sum = 0;
    
    scanf("%d", &n);
    
    for ( i = 1; i <= n ; i++)
    {
        scanf("%ld",&a[i]);
         
         sum = sum + a[i];
         
         if(max <= a[i]){
             max = a[i];
         }
         if(min >= a[i]){
             min = a[i];
         }
    }
    printf("%ld %ld %ld\n",min , max , sum);
    
    return 0;
}
