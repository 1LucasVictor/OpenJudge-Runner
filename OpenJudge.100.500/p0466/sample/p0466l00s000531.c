 #include<stdio.h>
 #include<string.h>
 int main(void)
 {
     char S[10],T[11];
     int s,i,J=0,t;

     scanf("%s%s",S,T);
     s=strlen(S);
     t=strlen(T);


     for(i=0;i<s;i++){
       if((S[i]>='a')&&(S[i]<='z')){
         if((T[i]>='a')&&(T[i]<='z')){
           if(S[i]==T[i]) J++;
         }
       }
     }

     if((J==s)&&(t==s+1)){
           printf("Yes\n");
     }
     else printf("No\n");

     return 0;
 }
