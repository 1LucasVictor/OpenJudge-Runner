#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a,b,k;
    int i;
    int r;
        int l;

    int j=1;
    int x[101] = {0};
    int y[101] = {0};
    int z[101] = {0};

    // スペース区切りの整数の入力
    scanf("%d %d %d",&a,&b,&k);

   for(i=1;i<=100;i++){
        if(a % i == 0){
              x[i]++;
              //printf("x %d\n",i);
        }
   }

   for(i=1;i<=100;i++){
        if(b % i == 0){
              y[i]++;
             //printf("y %d\n",i);
        }
   }

   for(i=1;i<=100;i++){
        if(x[i] == y[i]){
              z[j] = i;
              j++;
        }
        if((k+1) == j){
        //printf("j %d\n",j);
            break;
        }
   }
   
    // 出力
    printf("%d\n",z[k]);
    return 0;
}