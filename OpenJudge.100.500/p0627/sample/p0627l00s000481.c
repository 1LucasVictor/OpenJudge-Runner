    #include<stdio.h>
    #include<string.h>
    int main(void){
       int A,B,sum,kake,hiku;
       scanf("%d %d",&A,&B);
       sum=A+B;
       kake=A*B;
       hiku=A-B;
       if((sum>=kake)&&(sum>=hiku)){
          printf("%d",sum);
       }else if((sum<=kake)&&(kake>=hiku)){
          printf("%d",kake);
       }else if((hiku>=kake)&&(sum<=hiku)){
          printf("%d",hiku);
       }


       return 0;
    }