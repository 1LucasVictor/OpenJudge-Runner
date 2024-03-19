#include<stdio.h>
int main(){
    int a,b,c,msg=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=a; i<=b; i++){
        if(c%i==0){
            msg++;
        }
    }
    printf("%d\n",msg);
    return 0;
}
