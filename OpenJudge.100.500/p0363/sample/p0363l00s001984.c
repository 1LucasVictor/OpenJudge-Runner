#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x <= y && y <= z){
    printf("%d %d %d\n",x,y,z);
    } else if (x <= z && z <= y){
    printf("%d %d %d\n",x,z,y);
    } else if (y <= z && z <= x){
    printf("%d %d %d\n",y,z,x);
    } else if (y <= x && x <= z){
    printf("%d %d %d\n",y,x,z);
    } else if (z <= x && x <= y){
    printf("%d %d %d\n",z,x,y);
    } else {
    printf("%d %d %d\n",z,y,x);
    } return 0;
}
