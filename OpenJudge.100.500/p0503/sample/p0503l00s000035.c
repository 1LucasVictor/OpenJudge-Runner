#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
int main()
{
    int i, na, j;
    int *a;
    //int b= 0;
    bool exit= false;
    
    printf("\n");
    if(scanf("%d", &na)==1)
    {
    a= calloc(na, sizeof(int));
  
        for(i=1; i<na+1; i++)
        {
            printf("\n");
            if(scanf("%d", &a[i])==1&&i==na)
            {
                for(i=1; i<na+1; i++){
                    for(j = 1; j<na; j++)
                    {
                        if(a[i]==a[i+j])
                        {
                            exit= true;
                            break;
                        }
                    }
                }
                if(exit== true)
                    break;
            }
        }
        
        if(exit== false){
            printf("YES");
        }
        else{
            printf("NO");
        }
        //free(a);
    }
}
