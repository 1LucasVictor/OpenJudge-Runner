#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    int d=x%y;
    if(x<y){
        z=x;
        x=y;
        y=z;
    }
    
    while(d!=0){
        x=y;
        y=d;
        d=x%y;
    }
    printf("%d \n",y);
}
