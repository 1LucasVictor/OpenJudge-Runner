#include<stdio.h>
int main()
 { int i,N; 
    double t; 
    scanf("%d",&N);
     for(i=2; i<=9; i=i+1)
     { if(N%i==0)
          { 
        t= N/i; 
            if(t<=9)
             { printf("Yes\n"); return 0;
                 }
            }
        } 
                printf("No\n");
                 return 0; }