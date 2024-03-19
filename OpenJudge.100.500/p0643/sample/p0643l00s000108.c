    #include<stdio.h>
    int main()
    {
        int a,b;
        // 整数の入力
        scanf("%d %d",&a,&b);
      
      if(a*b%2 == 1){
        // 出力
        printf("Odd");
      }else 
        printf("Even");
        return 0;
    }