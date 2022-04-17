#include<iostream>
using namespace std;
struct Activity
{
int startTime, finishTime;
};
void SWAP(struct Activity *p, struct Activity *q)
{
struct Activity t;
t=*p;
*p=*q;
*q=t;
}
void bubbleSort(struct Activity a[], int n)
{
int pass,i;
for(pass=1;pass<n;pass++)
{
for(i=0;i<n;i++)
{
if(a[i].finishTime>a[i+1].finishTime)
{
SWAP(&a[i],&a[i+1]);
}
}
}
}
void activitySelection(struct Activity a[], int n)
{
int i,j;
i=0;
cout<<a[0].startTime<<" "<<a[0].finishTime<<endl;
for(j=i+1;j<n;j++)
{
if(a[j].startTime>=a[i].finishTime)
{
cout<<a[j].startTime<<" "<<a[j].finishTime<<endl;
i=j;
}
}
}
int main()
{
int n,i;
cout<<"Enter Number of Activities: ";
cin>>n;
struct Activity act[n];
for(i=0;i<n;i++)
{
cout<<"Enter start time: ";
cin>>act[i].startTime;
cout<<"Enter finish time: ";
cin>>act[i].finishTime;
}
bubbleSort(act,n);
/*cout<<"After sorting"<<endl;
for(i=0;i<n;i++)
{
cout<<act[i].startTime<<" "<<act[i].finishTime<<endl;
}*/
cout<<"Selected Activities: "<<endl;
activitySelection(act,n);
}
