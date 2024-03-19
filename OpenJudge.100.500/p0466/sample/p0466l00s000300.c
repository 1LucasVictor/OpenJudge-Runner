 #include<stdio.h>
 #include<string.h>
 int main(void)
 {
     char S[11],T[12];
     int s,i,J=0,t,U;

     scanf("%s",S);
     scanf("%s",T);

     s=strlen(S);
     t=strlen(T);
     U=t-s;

     for(i=0;i<s;i++)
       if(S[i]==T[i]) J++;

     if((J==s)&&(U==1)) printf("Yes\n");
     else printf("No\n");

     return 0;
 }
