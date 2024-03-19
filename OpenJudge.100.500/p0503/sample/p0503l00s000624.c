#include <stdio.h>
#include <string.h>
  long n;
  long numbers[7000000];
  long p=0;


int search(long key){
for(long i=0;i<p;i++){
if(numbers[i]==key)return 1;//Found
}

return 0;//Not found
}


int main(void)
{
 
scanf("%ld",&n);

int flg=0;

for(int i=0;i<n;i++){
    long tmp=0;
    scanf("%ld",&tmp);

    if(flg==0){
    if(search(tmp)==0){
        numbers[p]=tmp;
        p++;
    }else{
        flg=1;
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
