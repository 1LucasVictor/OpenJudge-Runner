#include <stdio.h>
 
void find3(int n);
  
int main(void) {
    int n;
      
    scanf("%d",&n);
    find3(n);
     
    printf("\n");
    return 0;
}
 
void find3(int n){
    int i;
     
    for(i=1;i<=n;i++){
        if(i % 3 == 0)
            printf(" %d",i);
        else if (i % 10 == 3)
            printf(" %d",i);
        /*else if (i / 10 == 3)
            printf(" %d",i);
        else if (i / 100 == 3)
            printf(" %d",i);*/
        else if (i / 1000 == 3)
            printf(" %d",i);
        else if (i % 1000 / 100 == 3)
            printf(" %d",i);
        else if (i % 100 / 10 == 3)
            printf(" %d",i);
        else{}
         
    }
}