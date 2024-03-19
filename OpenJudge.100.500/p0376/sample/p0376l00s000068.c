#include<stdio.h>
#define NUMBER 1000
int main(void)
{
    int i, tmp,num,a[NUMBER];
    scanf("%d",&num);
    for(i=0;i<num;i++)
    scanf("%d ",&a[i]);
    
    for(i=0;i<num/2;i++){
                tmp=a[i];
                a[i]=a[num-i-1];
                a[num-i-1]=tmp;
            
    }
    printf("%d",a[0]);
    for(i=1;i<num;i++)
    printf(" %d",a[i]);
printf("\n");
    return 0;
}
