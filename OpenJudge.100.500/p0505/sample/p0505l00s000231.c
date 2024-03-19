#include <stdio.h>

int main(void)
{
    int flag=0;
    long int h=0,n=0;
    long int A[100000]={};
    scanf("%ld %ld",&h,&n);
    for(int i=0;i<n;i++) scanf("%ld",&A[i]);
    for(int i=0;i<n;i++){
        h-=A[i];
        if(h<=0){
            flag=1;
            break;
        }
    }
    if(flag==1) printf("Yes");
    if(flag==0) printf("No");
    return 0;
}
