#include<stdio.h>
int main(){
    int x,y,d,e;
    scanf("%d%d",&x,&y);
    if(x<y){
        printf("1\n");
    }
    else{
        d=x/y;
        e=x%y;
    if(e==0){
        printf("%d\n",d);
     }
    else{
        printf("%d\n",d+1);
     }
    }

return 0;
}
