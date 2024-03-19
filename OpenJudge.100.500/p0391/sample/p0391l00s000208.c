#include<stdio.h>

int main(void){
    int n,i,j,a,b;
    char command[20],str[2000],s[2000];

    scanf("%s",str);
    scanf("%d",&n);

    for(j = 0;j < n;j++){
        scanf("%s",command);
        scanf("%d%d",&a,&b);

        if(command[2] == 'i'){
            for(i = 0;i <= b - a;i++)
                s[i] = str[a + i];
            s[i] = '\0';
            printf("%s\n",s);
        }else if(command[2] == 'p'){
            scanf("%s",s);
            for(i = 0;i <= b - a;i++)
                str[a + i] = s[i];
        }else{
            for(i = 0;i <= b - a;i++)
                s[i] = str[b - i];
            for(i = 0;i <= b - a;i++)
                str[a + i] = s[i];
        }
    }
    return 0;
}