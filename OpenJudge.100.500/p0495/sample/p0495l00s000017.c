#include<stdio.h>
    int main(){
    char str[4];
    scanf("%s",str);
      if(str[0]==str[1]&&str[1]==str[2])
        printf("No");
      else
        printf("Yes");
    return 0; 
}