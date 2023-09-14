#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements to be stored : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in the array : \n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int dupe=0;
int count=0;
printf("The unique elements are : ");
for(int i=0;i<n;i++)
{
dupe=0;
for(int j=0;j<n;j++)
{
if(arr[i]==arr[j] && i!=j)
{
dupe=1;
break;
}
}
if(dupe!=1)
{
printf("%d ",arr[i]);
count++;
}
}
if(count==0)
{
printf("n/a");
}
printf("\n");
}
