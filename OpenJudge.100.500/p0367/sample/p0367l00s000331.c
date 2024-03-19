#include<stdio.h>

int main(){
    int a,b,c;
    int cnt = 0;
    int x;
    
    scanf("%d %d %d\n",&a,&b,&c);
    for(int i = a;i <= b;i++){
        x = c % i;
        if(x == 0){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
