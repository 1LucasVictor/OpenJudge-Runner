#include <stdio.h>
#include <string.h>
int main(void)
{
        int a[10010],b,m,n,i,j=0,k=0,l=0,p=0,x=0,y=0,c=0;
        char s[1000];

        scanf("%d",&n);

        for(i=0; i<n; i++)
                scanf("%d",&a[i]);

        for(i=0; i<n; i++){
                if(a[i]%2==0){
                if((a[i]%3!=0)&&(a[i]%5!=0)){
                        printf("DENIED\n");
                        return 0;}
                }
        }
        printf("APPROVED\n");
            //155
         return 0;
}