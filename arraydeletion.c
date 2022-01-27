#include<stdio.h>
int main()
{
int a[100],position,c,n;
printf("enter the elements in array");
scanf("%d",&n);
printf("enter %d elements",n);
for(c=0;c<n;c++)
scanf("%d",&a[c]);
printf("enter the location to delete elements");
scanf("%d",&position);
if(position>=n+1)
printf("deletion not possible");
else
{
for(c=position-1;c<n-1;c++)
a[c]=a[c+1];
printf("resultant array");
for(c=0;c<n-1;c++)
printf("%d",a[c]);
}
return 0;
}
