#include <iostream>
using namespace std;
void Swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
{
    cout<<"\n\nPass "<<i+1<<" :"<<endl;
for (j = 0; j < n-i-1; j++)
{
    cout<<"\n   Comparison "<<j+1<<" : ";
    for(int p = 0; p<n-i; p++)
        cout << arr[p] << "   ";

           cout<<endl;
    if (arr[j] > arr[j+1])
Swap(&arr[j], &arr[j+1]);

}

cout<<"\n   Pass "<<i+1<<" Final => ";
    for(int c = 0; c<n-i; c++)
        cout << arr[c] << "   ";

           cout<<endl;
           //n--;
}

}


void printArray(int arr[], int n)
{
int i;
for (i=0; i < n; i++)
cout<<arr[i]<<"   ";
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
bubbleSort(arr,n);
cout<<"\n    The Final Output : ";
printArray(arr,n);
return 0;
}
