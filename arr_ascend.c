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
printf("The array in ascending order is : ");
int temp;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
}
