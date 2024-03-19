#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>

int main(void){
		int a,b,c,d;
    int ans;
		scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    d = c-b+1;
    ans = d/a;

    if(ans > 0){
      puts("OK");
    }
    else{
      puts("NG");
    }





		return 0;
}
