#include<stdio.h>
int main(){
    char a[256], b[256];
    int s=0, i=0;
 
    scanf("%s",a);
    scanf("%s",b);
 
    while(a[i]!='\0'){
        if(a[i] != b[i]){
            a[i] = b[i];
            s++;
        }
        i++;
    }
    printf("%d",s);
  
    return 0;
}