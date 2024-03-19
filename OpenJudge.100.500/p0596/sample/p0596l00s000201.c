#include<stdio.h>
#include<string.h>
int main()
{
    int i, n, z=0, o=0;
    char s[100000];

    scanf("%s", s);

    n = strlen(s);

    /*while(s[n]){
        n++;
    }*/

    for(i=0; i<n; i++){
        if(s[i] == '0'){
            z++;
        }else{
            o++;
        }

    }


    if(o<z){
        printf("%d\n", o*2);
    }else{
        printf("%d\n", z*2);
    }

    return 0;
}
