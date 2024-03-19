#include <stdio.h>
  
void find3(int n);
   
int main(void) {
    int n;
       
    scanf("%d",&n);
    find3(n);
      
    printf("\n");
    return 0;
}
  
void find3(int n)
{
    int i, j;
      
    for(i=1;i<=n;i++){
        if(i % 3 == 0){
            printf(" %d",i);
        } else {
            for(j = i; j > 0;j /= 10){
                if (j % 10 == 3){
                    printf(" %d",i);
                    break;
                } else {
                }
            }
        }
    }
}