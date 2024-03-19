#include<stdio.h>
int main(){
    int H,A;
    scanf("%d %d",&H,&A);
    if(H%A != 0){
        printf("%d\n",(H/A)+1);
    }else{
        printf("%d\n",H/A);
    }
    return 0;
}
