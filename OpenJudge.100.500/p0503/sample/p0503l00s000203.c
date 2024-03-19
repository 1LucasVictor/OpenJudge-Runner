#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i, na;
    int *a;
    int b= 0;
    
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
                    for(int j = i+1; j<na+1; j++)
                    {
                        if(a[i]==a[j])
                        {
                            b=b+1;
                            break;
                        }
                    }
                }
            
            }
        }
        
        if(b==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
        //free(a);
    }
    return 0;
}
