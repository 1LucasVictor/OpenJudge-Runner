#include<stdio.h>


int main(void){
    int al,b,c,d,e,k;
    int a[10];
    scanf("%d",&al);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&k);
    a[0]=k+al-b;
    a[1]=(k+al-c);
    a[2]=(k+al-d);
    a[3]=(k+al-e);
    a[4]=(k+b-c);
    a[5]=(k+b-d);
    a[6]=(k+b-e);
    a[7]=(k+c-d);
    a[8]=(k+c-e);
    a[9]=(k+d-e);
    for(int i=0;i<10;i++){
        if(a[i]<0){
            printf(":(");
            return 0;
        }
    }
    printf("Yay!");
    return 0;
}