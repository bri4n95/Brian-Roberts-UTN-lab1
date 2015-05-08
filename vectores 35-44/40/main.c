#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a[10]={11,22,33,44,55,66,77,88,99,100}, b[10]={2,34,56,78,90,45,34,44,22,64}, c[10];
int i;


for(i=0;i<10;i++)
{
if(a[i]>b[i])
{c[i]=b[i];}
if(a[i]<b[i])
{c[i]=a[i];}
}

for(i=0;i<10;i++)
{
printf("A=%d\tB=%d\tC=%d\n",a[i],b[i],c[i]);
}
  system("PAUSE");	
  return 0;
}
