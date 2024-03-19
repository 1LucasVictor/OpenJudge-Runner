#include<stdio.h>
#include<string.h>
char card_name[52];
int card_no[52] = {0};
int s[13] = {0};
int h[13] = {0};
int c[13] = {0};
int d[13] = {0};
int main(){
int n,count=0;
int no_s=0,no_h=0,no_c=0,no_d=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%s",&card_name[i]);
    scanf("%d",&card_no[i]);
}

for(int i=0;i<n;i++){
    if(card_name[i]=='S'){
        s[no_s] = card_no[i];
        no_s++;
    }
    else   if(card_name[i]=='H'){
        h[no_h] = card_no[i];
        no_h++;
    }
    else   if(card_name[i]=='C'){
        c[no_c] = card_no[i];
        no_c++;
    }
    else   if(card_name[i]=='D'){
        d[no_d] = card_no[i];
        no_d++;
    }
}
for(int i=1;i<=13;i++){
for(int j=0;j<13;j++){
    if(i==s[j]){
        count++;
    }

}
 if(count==0){
        printf("S %d\n",i);
    }
else count = 0;
    }

    for(int i=1;i<=13;i++){
for(int j=0;j<13;j++){
    if(i==h[j]){
        count++;
    }

}
 if(count==0){
        printf("H %d\n",i);
    }
else count = 0;
    }

for(int i=1;i<=13;i++){
for(int j=0;j<13;j++){
    if(i==c[j]){
        count++;
    }

}
 if(count==0){
        printf("C %d\n",i);
    }
else count = 0;
    }

for(int i=1;i<=13;i++){
for(int j=0;j<13;j++){
    if(i==d[j]){
        count++;
    }

}
 if(count==0){
        printf("D %d\n",i);
    }
else count = 0;
    }

return 0;
}


