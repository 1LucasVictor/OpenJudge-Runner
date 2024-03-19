#include <stdio.h>
 
int main()
{
    int k;
    int a,b;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
 
if(a%k==0){
    printf("OK");
}
else if(((a/k)+1)*k<b){
    printf("OK");
}
else{
    printf("NG");
}
    return 0;
}