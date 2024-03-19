#include <stdio.h>
 
int main(){
    int a,i,count=0;
    scanf("%d",&a);
    for(i=0;i<3;i++){
    if(a%10==7) count++;
    a=a/10;}
    if(count>=1)
    puts("Yes");
    else
    {
    puts("No");
    }
    
    return 0;
}    