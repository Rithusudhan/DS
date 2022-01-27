#include<stdio.h>
int main()
{
int a[30],position,i,n,value;
printf("enter the number of elements in the array");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the location to insert a new element");
scanf("%d",&position);
printf("enter the value");
scanf("%d",&value);
for(i=n-1;i=position-1;i--)
a[i+1]=a[i];
a[position-1]=value;
printf("insertion array");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
