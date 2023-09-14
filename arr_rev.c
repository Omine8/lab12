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
int temp;
printf("The array elements in reverse order are : \n");
for(int i=0;i<n/2;i++)
{
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
}
