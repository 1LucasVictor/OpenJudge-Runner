#include<stdio.h>
int main(void)
{
    char N[4];
    int i;
  
    scanf("%s",N);
  
    for(i=0;i<3;i++){
      if(N[i]=='7'){
        printf("Yes\n");
        return 0;
      }
    }
  
    printf("No\n");
    
    return 0;
}
