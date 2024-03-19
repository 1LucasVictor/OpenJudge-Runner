#include <stdio.h>
int main (int argc, char * argv[])
{
    char ch[1200];
    char a[1200];
    int n=0;
    while (1){
    scanf("%c",&a[n]);
        if(a[n]=='\n'){
            break;
        }
        ch[n] = a[n];
        if('A'<= a[n] && a[n]<='Z'){
            ch[n] =a[n]+32;
        }else if('a'<=a[n] && a[n]<='z'){
            ch[n] =a[n]-32;
        }
        n++;
    }
    
    for(int i=0;i<n;i++){
    printf("%c",ch[i]);
    }
    printf("\n");
    return 0;
    
}
