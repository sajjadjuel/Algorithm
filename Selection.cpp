#include <iostream>
using namespace std;
void Swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
void selectionSort(int arr[], int n)
{
int i, j, min_idx;
for (i = 0; i < n-1; i++)
{
    cout<<"\n Pass " <<i+1<<" : "<<endl;

min_idx = i;
for (j = i+1; j < n; j++)
if (arr[j] < arr[min_idx])
    min_idx = j;
    cout<<"   Select Index "<<i<< " Minimum Index "<<min_idx<<endl;
for (int p=0; p < n; p++)
cout<<"            "<<arr[p]<<"  ";
cout<<endl;
Swap(&arr[min_idx], &arr[i]);
}
}
void printArray(int arr[], int n)
{
int i;
cout<<"\n Final Array : "<<endl;
for (i=0; i < n; i++)
cout<<"            "<<arr[i]<<"  ";
cout<<endl;
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
selectionSort(arr,n);
printArray(arr,n);
return 0;
}
