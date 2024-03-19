#include<stdio.h>
//#include<string.h>
int main(){
    char a[200000];
    char b[200000];
    scanf("%s",a);
    scanf("%s",b);
    int n=0;
    while(a[n]!='\0'){
        n++;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
        count++;
    }
    printf("%d",count);
    return 0;

}