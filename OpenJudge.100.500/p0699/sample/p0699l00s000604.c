#include<stdio.h>
int main(){
    int a[4],i,i5,i7;
    i5=0;i7=0;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]==5)   i5++;
        else if(a[i]==7)    i7++;
    }
    if(i5==2&&i7==1)   printf("YES");
    else printf("NO");
return 0;
}
