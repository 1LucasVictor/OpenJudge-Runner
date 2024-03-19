#include<stdio.h>
int main(){

    int a=0,b=0,c=0,i;
    char st[5];

    char st1,st2;

    scanf("%s", &st);
    st1 = st[0];

    for(i=0;i<4;i++){
            if(st[i] == st1){
                a++;
            }else{
                if(b==0){
                    st2=st[i];
                }
                if(st2==st[i]){
                    b++;
                }else{
                    c++;
                }
            }
    }
    if(a==2 && b==2 && c==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
