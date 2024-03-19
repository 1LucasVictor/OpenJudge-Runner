#include<stdio.h>
int main()
{

    int arr[10],i,a=0,b=0;

    for(i=1;i<=3;i++){
        scanf("%d",&arr[i]);

        if(arr[i]==5){
            a++;
        }
        else if(arr[i]==7){
            b++;
        }
    }
    if(a==2&&b==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
