 #include<stdio.h>
 int main(void)
 {
    int A,B,C,a=0;

    scanf("%d%d%d",&A,&B,&C);

    if((A==5)||(A==7)){
      if((B==5)||(B==7)){
        if((C==5)||(C==7)){
          if(A+B+C==17) printf("YES\n");
            else printf("NO\n");
        }
      }
    }

 return 0;
 }