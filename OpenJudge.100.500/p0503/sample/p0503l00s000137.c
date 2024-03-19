#include <stdio.h>
#include <string.h>
  int  n;
  int  numbers[1000000000];
  int p=0;


int search(int key){
for(int i=0;i<p;i++){
if(numbers[i]==key)return 1;//Found
}

return 0;//Not found
}


int main(void)
{
 
scanf("%d",&n);

int flg=0;

for(int i=0;i<n;i++){
    int tmp=0;
    scanf("%d",&tmp);

    if(flg==0){
    if(search(tmp)==0){
        numbers[p]=tmp;
        p++;
    }else{
        printf("NO");
        flg=1;
        return 0;
    }
    }
}

if(flg==0){
    printf("YES");
}else{
    printf("NO");
}
  return 0;
}
