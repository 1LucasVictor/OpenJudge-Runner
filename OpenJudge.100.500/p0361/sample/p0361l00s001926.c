int main(){
int a,s,m,h;
scanf("%d",&a);
s= a%60;
h= (a/60)/60;
m= (a-(h*60*60))/60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}