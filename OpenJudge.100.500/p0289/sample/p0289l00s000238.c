int main(){
long a,b,c,d;
scanf("%lu %lu\n",&a,&b);
for (d=1;d<=b;d++){if ((a%d==0)&&(b%d==0)){c=d;};};
printf("%lu\n",c);
return 0;
}