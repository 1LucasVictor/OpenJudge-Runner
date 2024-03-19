#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[6];
    scanf("%s",a);
    int b[26]={0},i,flag=0;
    for (i=0;i<4;i++){
        b[a[i]-65]++;
    }
    for(i=0;i<26;i++){
        if(b[i]==2)
            flag++;
    }
    if(flag==2){
        printf("Yes");
    }
   else{
        printf("No");
    }
    return 0;
}
