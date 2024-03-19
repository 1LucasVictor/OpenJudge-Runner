#include<stdio.h>
#include<stdlib.h>
int main(){
       int five=0,seven=0,n;
       for(int i=0;i<3;i++){
              scanf("%d",&n);
              if(n==5) five++;
              if(n==7) seven++;
       }
       if(five==2&&seven==1) printf("YES");
       else printf("NO");
       return 0;
}
