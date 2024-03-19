 #include<stdio.h>
 int main(void)
 {   
    int N,i,j,A,c;                                                   
    scanf("%d",&N);
     for(i=1;i<=9;i++){
      for(j=1;j<=9;j++){
        A=i*j;
        if(N==A) c=1;
      }
     } 
      if   (c==1) printf("Yes\n");
      else        printf("No\n");
       
    return 0;
 }   
