#include <stdio.h>
int main(){
    int a,b,c,d,e,k;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&k);
    int way[5];
    way[0]=a;
    way[1]=b;
    way[2]=c;
    way[3]=d;
    way[4]=e;
    for(int i = 0;i < 5;i++){
        for(int j = i;j < 5;j++){
            if(way[j] - way[i] > k){
                printf(":(\n");
                return 0;
            }
        }
    }
    printf("Yay!\n");
    return 0;
}