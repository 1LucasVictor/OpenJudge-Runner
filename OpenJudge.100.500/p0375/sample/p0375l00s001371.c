#include <stdio.h>
int main(void) {
    int i,n;
    scanf("%d", &n);
    for (i=3;i<=n;i++){
        if (i%3==0){
        printf(" %d",i);
    }else{
        int temp=i;
        do{
            if(temp % 10 == 3){
                printf(" %d", i);
                break;
                }
            temp /= 10;
        }while(temp > 0);
    }
  }
  printf("\n");
  return 0;
}