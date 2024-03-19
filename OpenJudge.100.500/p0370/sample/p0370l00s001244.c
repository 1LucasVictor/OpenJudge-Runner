#include <stdio.h>

int main(){
    
    int a,b;
    char moji;
    
    while(1){
    scanf("%d %c %d",&a,&moji,&b);
    
    if(moji == '+'){printf("%d\n",a+b); continue;}
    else if(moji == '-'){printf("%d\n",a-b);continue;}
    else if(moji == '*'){printf("%d\n",a*b);continue;}
    else if(moji == '/'){printf("%d\n",a/b);continue;}
    else if(moji == '?') break;
    }
    
    return 0;
}

