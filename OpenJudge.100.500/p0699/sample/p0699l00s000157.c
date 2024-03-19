 #include<stdio.h>
 int main(void)
 {
    int A,B,C,a;

    scanf("%d%d%d",&A,&B,&C);

    if(A==5) {
      if(((B==5)&&(C==7))||((B==7)&&(C==5)))
        a=1;
      }
    if(B==5) {
      if(((A==5)&&(C==7))||((A==7)&&(C==5)))
        a=1;
      }

    if(C==5) {
      if(((B==5)&&(A==7))||((B==7)&&(A==5)))
        a=1;
      }
    if(a==1) printf("YES\n");
    else     printf("NO\n");

    return 0;
 }