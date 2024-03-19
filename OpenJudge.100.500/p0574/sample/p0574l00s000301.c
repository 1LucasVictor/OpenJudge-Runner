#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int n,m,i,j,k,b,tmp;
    char a[9999];
    while(scanf("%s",a)==1)
    {


    for(i=0,k=0;i<3;i++)
    {
        if(a[i]==a[i+1]){k++;}
    }
    if(k==0){printf("Good\n");}
    else{printf("Bad\n");}


    }

    return 0;

}
