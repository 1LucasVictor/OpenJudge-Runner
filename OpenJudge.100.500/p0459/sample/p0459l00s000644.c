#include<stdio.h>
 
int main(){
	int i,num,X,Y,cnt;
    cnt = 0;
    if(scanf("%d%d",&X,&Y) == -1){
    	return 0;
    }
    for(i = 0;i <= X;i++){
        num = 2*i + 4*(X - i);
        if(num == Y){
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