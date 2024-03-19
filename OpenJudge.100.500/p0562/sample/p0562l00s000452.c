#include<stdio.h>
int main(){
    int a,b,tap=1,count;
    
    scanf("%d %d",&a,&b);
    count = a; //未使用の電源タップの数
    if(a >= b){
        printf("1\n");
        return 0;
    }
    
    while(1){
        count += a-1;
        tap++;
        if(count >= b) break;
    }
    printf("%d\n",tap);
    return 0;
}
