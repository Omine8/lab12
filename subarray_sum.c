#include<stdio.h>
int main(){
int n,sum;
printf("Enter the number of elements to be stored : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in the array : \n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the sum : \n");
scanf("%d",&sum);
int temp=arr[0];
int count=1;
for(int i=0;i<n;i++)
{
for(count;temp>sum && count<i;count++)
{
temp=temp-arr[i+1];
}
if(temp==sum)
{
printf("Sum found between indices %d and %d \n",count,i);
}
if(count<n)
{
temp=temp+arr[i+1];
}
}
}
