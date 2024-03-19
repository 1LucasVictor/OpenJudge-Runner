#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a[6],flag=0;
    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<4;i++){
        for(int k=1;k<5;k++){
            if((a[k]-a[i])>a[5])flag=1;
        }
    }
    if(flag==1)printf(":(");
    else printf("Yay!");
return 0;
}