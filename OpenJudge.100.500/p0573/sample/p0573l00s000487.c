#include <stdio.h>
#include <string.h>
#include <math.h>

#define max 4

int* sortMaxmin(int*, int);
int* sortMinmax(int*, int);

int main()
{
    int i;
    char s[max];
    
    scanf("%s", s);
    
    if (s[0]==s[1]&&s[2]==s[3]&&s[0]!=s[2]) {
        printf("Yes");
        return 0;
    } else if(s[0]==s[2]&&s[1]==s[3]&&s[0]!=s[1]){
        printf("Yes");
        return 0;
    } else if(s[0]==s[3]&&s[1]==s[2]&&s[0]!=s[2]){
        printf("Yes");
        return 0;
    } else{
        printf("No");
        return 0;
    }
    
    return 0;
}

int* sortMaxmin(int *a, int b)
{
    int i, j, tmp;
    for(i=0; i<b; i++){
        for (j=i+1; j<b; j++) {
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    return a;
}

int* sortMinmax(int *a, int b)
{
    int i, j, tmp;
    for(i=0; i<b; i++){
        for (j=i+1; j<b; j++) {
            if(a[i]<a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    return a;
}

