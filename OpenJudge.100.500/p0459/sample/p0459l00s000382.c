#include<stdio.h>

int main(){
	int a,b,y,X,Y,cnt;
    cnt = 0;
    if(scanf("%d%d",&X,&Y) == -1){
    	return 0;
    }
    for(a = 0;a <= X;a++){
        y = 2*a + 4*(X - a);
        if(y == Y){
        	cnt++;
        }
	}
    
    if(cnt == 0){
    	printf("No\n");
    }else{
    	printf("Yes\n");
    }
    
    return 0;
}