#include<stdio.h>
#include<string.h>
char str[205];
char str1[205];
int len_str[200];
int main(){

while(1){
        scanf("%s",str);
        if(str[0]=='-')
            break;

        int len = strlen(str);
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&len_str[i]);
        }
        int i,j,k;
        for( i=0;i<n;i++){
            for( j=len_str[i],k=0;j<len;j++,k++){
                str1[k] = str[j];
            }
            for( j=0;j<len_str[i];j++){
                str1[k] = str[j];
                k++;
            }
            str1[k] = '\0';
            for(j=0;j<len;j++){
                str[j] = str1[j];
            }
        }
        printf("%s\n",str);
}



return 0;
}

