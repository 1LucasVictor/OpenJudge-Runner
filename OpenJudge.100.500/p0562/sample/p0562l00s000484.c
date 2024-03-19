#include<stdio.h>
int main(){
    int a,b,tap=0,count=1;
    
    scanf("%d %d",&a,&b);
    
    while(count < b){
        count += a-1;
        tap++;
    }
    printf("%d\n",tap);
    return 0;
}
