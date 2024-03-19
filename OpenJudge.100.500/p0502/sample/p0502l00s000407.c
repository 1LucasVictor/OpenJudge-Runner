#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://atcoder.jp/contests/abc155/tasks/abc155_b

int main()
{
    int k= 0;
    int a[10000];
    int b= 0;
    
    printf("\n");
    scanf("%d", &k);
    
        for(int i=0; i<k; i++)
        {
            scanf("%d", &a[i]);
        }
          
        for(int i=0; i<k; i++)
        {
            if(a[i]%2==0)
            {
                if(a[i]%3!=0&&a[i]%5!=0)
                {
                    b++;
                }
            }
        }
        
        if(b==0)
        {
            printf("APPROVED");
        }
        else
        {
            printf("DENIED");
        }
       
        return 0;
        
    
   
}

