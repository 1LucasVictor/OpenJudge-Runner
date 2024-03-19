#include <stdio.h>

int main(void)
{
    unsigned int i;
    int data_set;
    int a[3];
    
    scanf("%d",&data_set);
    
    for(i=0;i<data_set;i++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        
        if(a[0]*a[0] == a[1]*a[1] + a[2]*a[2])
        {
            printf("YES\n");
        }
        else if(a[1]*a[1] == a[0]*a[0] + a[2]*a[2])
        {
            printf("YES\n");
        }
        else if(a[2]*a[2] == a[0]*a[0] + a[1]*a[1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");            
        }
    }
    
    return 0;
}