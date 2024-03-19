        #include<stdio.h>
        #define NUMBER 200005
        int main(){
         int i = 0;
          int ans = 0;
        char S[NUMBER],T[NUMBER];
        scanf("%s",S);
        scanf("%s",T);
         
         
        while(S[i]){
          if(S[i] != T[i]){
          ans++;
          
          }
          i++;
          }
        printf("%d",ans);
          
          return 0;
        }