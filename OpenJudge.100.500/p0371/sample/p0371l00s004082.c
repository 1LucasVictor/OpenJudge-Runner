#include <stdio.h>

int main(){
    int a;
    int b[1000];
    scanf("%d",&a);
    int i=0;
    while(i<a){
        scanf("%d",&b[i]);
        i++;
        }
    int min=100000;
    int max=0;
    int sum=0;
    for(i=0;i<a;i++){
        if(min>b[i])
        min=b[i];
        if(max<b[i])
        max=b[i];
        sum=sum+b[i];
        }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}