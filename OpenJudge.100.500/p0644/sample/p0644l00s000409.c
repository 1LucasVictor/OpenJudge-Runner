#include<stdio.h>
int main(){
    int s,s1,s2,s3,i=0;
    scanf("%d",&s);
    s1=s%10;
    s=s/10;
    s2=s%10;
    s3=s/10;
    if(s1==1){
        i++;
    }
    if(s2==1){
        i++;
    }
    if(s3==1){
        i++;
    }
    printf("%d\n",i);
    return 0;
}
