#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int n;
    
    int d = 0;
    
    printf("\n");
    scanf("%d", &n);
    
    
    int i;
    for(i=1; i<n+1; i++)
    {
        int a[i];
        //int count = sizeof(a)/sizeof(int);
        
        printf("\n");
        scanf("%d", a);

        for(int j=i+1; j<n+1; j++)
        {
            if(a[i]==a[j])
            {
                d= 1;
            }
            else
            {
                d= 0;
            }
        }
    }
    
    if(d==1)
    {
        printf("YES");
    }
    else if(d==0)
    {
        printf("NO");
    }
        
    return 0;
}

