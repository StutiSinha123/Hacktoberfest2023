#include<stdio.h>
int seq(int* a,int key,int size){
int i;
for(i=0;i<size;i++){
    if(a[i]==key)
    return i+1;
}
return -1;
}
int main(){
int a[10],n,k,pos;
printf("enter lenght");
scanf("%d",&n);
printf("enter the element");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key");
scanf("%d",&k);
pos=seq(a,k,n);
if(pos==-1)
printf("key not found");
else
printf("key found %d",pos,k);}
