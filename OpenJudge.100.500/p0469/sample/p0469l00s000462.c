#include<stdio.h>
int main()
{
    int k,a,b;
    int f = 0;
    // 整数の入力
    scanf("%d", &k);
    // スペース区切りの整数の入力
    scanf("%d %d",&a,&b);
  	
  	int i;
  	for(i=1; k*i <= b; i++){
    	if(a <= k*i && k*i <= b){
        	f = 1;
          	break;
        }
    }
  
  	if(f){
    	puts("OK");
    }else{
    	puts("NG");
    }
  	
    return 0;
}