#include<stdio.h>
 
int main(void)
{
    char str[1200] = {0} ;
    int i=0 ;
 
    fgets(str ,sizeof str ,stdin);
 
    for (i=0 ;i<1200 ;i++){
 
        if (str[i]=='\n') break;
 
        if (str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
 
        } else if (str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
 
    }
 
    printf("%s",str);
    return 0;
}
