#include<stdio.h>
#include <string.h>
int main(){
 char C[11];
 char D[11];
 int i=0;
 scanf("%s",C);
 scanf("%s",D);
 int p=strlen(C);
 for(i=0;i<p+1;i++){
   if(i==p){
    printf("Yes");
   }
   else if(C[i]!=D[i]){
    printf("No");
    break;
   }
 }
 return 0;
}