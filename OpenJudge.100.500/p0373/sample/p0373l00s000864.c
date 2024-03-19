#include<stdio.h>
#define NUMBER 300
int main(void){
    int H[NUMBER],W[NUMBER],i,j,k,c=0;
    for(i=0;i<NUMBER;i++){
       scanf("%d %d",&H[i],&W[i]);
       if(H[i]==0&&W[i]==0)
         break;
       c++;
    }
    for(i=0;i<c;i++){
       for(j=0;j<H[i];j++){
          for(k=0;k<W[i];k++){
             if(j==0||j==(H[i]-1)||k==0||k==(W[i]-1))
               putchar('#');
             else
               putchar('.');
          }
       putchar('\n');
       }
    putchar('\n');
    }
    return 0;
}
