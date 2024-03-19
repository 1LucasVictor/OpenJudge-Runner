#include <stdio.h>
int main(void)
{
    int i,n,num,min=1000001,max=-1000001;
    int sum=0;
    scanf("%d",&n);
     
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum+=num;
             
        if(min>num){
            min=num;
        }
         
        if(max<num){
            max=num;
        }
    }
    printf("%d %d %ld\n",min,max,sum);
    return 0 ;
}