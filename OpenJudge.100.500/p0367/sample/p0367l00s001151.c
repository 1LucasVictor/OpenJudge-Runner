#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    int i;//アクセス用
    int count=0;//カウント用
    
    scanf("%d %d %d",&a,&b,&c);
    
    for(i=a;i<b;i++){
        if(c%i==0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

