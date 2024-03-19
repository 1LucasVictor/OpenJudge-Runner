#include<stdio.h>
int main()
{
    char a[4];
    int p=0;
    scanf("%s%s%s%s",&a[1],&a[2],&a[3],&a[4]);
    if(a[1]==a[2]){
        p+=1;
    }
    if(a[1]==a[3]){
        p+=1;
    }
    if(a[1]==a[4]){
        p+=1;
    }
    if(a[2]==a[3]){
        p+=1;
    }
    if(a[2]==a[4]){
        p+=1;
    }
    if(a[3]==a[4]){
        p+=1;
    }
if(p==2){
    printf("Yes");
}else{
    printf("No");
}
}