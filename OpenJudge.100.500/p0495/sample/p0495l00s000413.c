#include <stdio.h>
#define max 3
char arr[max];
int main()
{int t,flag_a,flag_b;//scanf("%d",&t);
//while(t--){
    flag_b=0;flag_a=0;
    scanf("%s",arr);
    for(int i=0;i<3;i++){
        if(arr[i]=='A'){
            flag_a=1;
        }
        if(arr[i]='B'){
            flag_b=1;
        }
    }
    if(flag_b==0 || flag_a==0){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
//}
    return 0;
}
