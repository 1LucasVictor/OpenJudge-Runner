
int main(){
int a,b,c,i,num;
num=0;
scanf("%d %d %d\n",&a,&b,&c);
for (i=a;i<=b;i++){
if (c%i==0){num=num+1;}}
printf("%d\n",num);
}