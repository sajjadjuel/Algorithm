#include <iostream>
using namespace std;
int Finding(int arr[], int n)
{
int i,m;
m=arr[0];
for (i = 1; i < n; i++)
if (arr[i]>m)
m=arr[i];

return m;

}
int main()
{
int n,x,i;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"Enter Array Elements: ";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
x=Finding(arr,n);
cout<<"\nThe Maximum Value is: "<<x;
}
