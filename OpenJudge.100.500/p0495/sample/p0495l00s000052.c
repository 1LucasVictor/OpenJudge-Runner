#include <stdio.h>

int main(){
    char arr[3];
    scanf("%s",arr);

    if(arr[0]==arr[1]&&arr[0]==arr[2]&&arr[1]==arr[2]) printf("No");

    else printf("Yes");




    return 0;
}