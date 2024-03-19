    #include<stdio.h>
    int main(){
    	int n,a,b,min;
    	scanf("%d %d %d", &n,&a,&b);
        min = n*a;
    	if(b < min){
        	min = b;
        }
      // 出力
    	printf("%d",min);
    	return 0;
    }