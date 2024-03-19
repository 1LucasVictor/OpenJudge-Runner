#include<stdio.h>
int main(){
    char a[1500];
    int n=0;
    while(1){
        scanf("%c", &a[n]);
        if(a[n]=='\n') break;
        n++;
    }
    int i=0;
    
    while(a[i]){
        if(a[i]=='\n') break;
        if(a[i]>='a'&&a[i]<='z'){
            a[i]=a[i]-32;
        }
        else if(a[i]>='A'&& a[i]<='Z'){
            a[i]=a[i]+32;
        }
        i++;
    }
    printf("%s",a);
    
    return 0;
}
