#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d \n %d",&a,&b);
    if (a==b || a-b==1){
        printf("Yay!");
    }
    else {
        printf(":(");
    }
 return 0;
}

