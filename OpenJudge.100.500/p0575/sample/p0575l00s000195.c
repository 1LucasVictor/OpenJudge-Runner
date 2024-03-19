#include <stdio.h>
int main()
{
	int n; 
	int k; /* 入力個数 */
	scanf("%d %d" , &n,&k);
	
	int a[100002];
    for(int f = 0; f < n; f++){
        scanf("%d", &a[f]);
    }
  	int count = 0;
    //i番目から取得
    for(int i=0; i<n; i++){      
      int sum=0;
      //長さlの部分集合
      for(int l=0; i+l<n; l++){
        sum = sum + a[i+l];
       	//printf("%d %d\n",i,sum);
        if(sum>=k){
          count = count + n -(i+l);
          break;
        }
        //count = count + n -(i+l);
      }
    }
printf("%d",count);
}