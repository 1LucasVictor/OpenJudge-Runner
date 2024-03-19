#include<stdio.h>
int main(){
    int a,b,c,d;
    int s[100];
    int t[100];
    int count=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(int i=0;i<100;i++){
        if((a<=i)&&(i<b)){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }
    for(int i=0;i<100;i++){
        if((c<=i)&&(i<d)){
            t[i]=1;
        }else{
            t[i]=0;
        }
    }
    for(int i=0;i<100;i++){
            if((s[i]==1)&&(t[i]==1)){
                count=count+1;
            }else{

            }
    }
    printf("%d\n",count);
}