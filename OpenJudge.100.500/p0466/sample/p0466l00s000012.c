#include<stdio.h>
#include<string.h>
int main(){
   char S[10];
   char T[11];
   scanf("%s",S);
   scanf("%s",T);
   int size1=strlen(S);
   int size2=strlen(T);
   int cnt=0;
   if(size1>=1&&size1<=10&&size2==size1+1){
      for(int i=0;S[i]!='\0';i++){
         if(S[i]==T[i]){
            cnt++;
         }
      }
      if(cnt==size1&&T[size2-1]>=97&&T[size2-1]<=122){
         printf("Yes");
      }
      else{
         printf("No");
      }
   }
   return 0;
}