int main(){
int n,a[100],i,x;
scanf("%d",&n);
for(i=0; i<n; i++){
scanf("%d",&a[i]);
}

for(x=0; x<n; x++){
printf("%d",a[i-x-1]);
if(x<n -1)printf(" ");

}
printf("\n");
return 0;
}