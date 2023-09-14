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
printf("The even numbers in the array are : ");
for(int i=0;i<n;i++)
{
if(arr[i]%2==0)
{
printf("%d ",arr[i]);
}
}
printf("\n");
printf("The odd numbers in the array are : ");
for(int i=0;i<n;i++)
{
if(arr[i]%2!=0)
{
printf("%d ",arr[i]);
}
}
printf("\n");
}
