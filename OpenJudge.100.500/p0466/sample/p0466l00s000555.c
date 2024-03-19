#include <stdio.h>
#include <string.h>
int main()
{
    char a[12];
    scanf("%s", &a);
    char b[12];
    scanf("%s", &b);
    int flag=0;
    for(int i = 0;i<strlen(a);i++){
        if(a[i]!=b[i]){
flag=1;        
        }
    }
 
 if(flag==0){
    printf("Yes");
  }else{
    printf("No");
  }
  
    return 0;
}