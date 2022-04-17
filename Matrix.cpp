#include<iostream>
#include<limits>
using namespace std;
int MatrixChainMultiplication(int p[], int n)
{
cout<<"\n\t\tOUTPUT\n\nNumber of matrix: "<<n<<endl<<endl<<endl;
cout<<"\t TABLE: "<<endl;
cout<<"\t======= "<<endl<<endl;
int m[n][n];
int K[n][n];
int i, j, k, L, q;
for (i=1; i<=n; i++)
m[i][i] = 0;
for (L=2; L<=n; L++)
{
for (i=1; i<=n-L+1; i++)
{
    //for(int l=1;l<k;l++)
        //    cout<<" "<<"\t";
j = i+L-1;
m[i][j] = 99999999; //INT_MAX; //assigning to maximum value
for (k=i; k<=j-1; k++)
{
q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];

if (q < m[i][j])
{
m[i][j] = q;
//K[i][k]=k;
}
//cout<<k<<"\t";
//cout<<endl;
}


}

}
cout<<endl;
for(int p=1;p<=n;p++)
{

    for(int s=1;s<p;s++)
            cout<<" "<<"\t";
    for(int q=p;q<=n;q++)
    {

        cout<<m[p][q]<<"\t";
    }
    cout<<endl;
}
/*cout<<"\n\t\t K Table\n"<<endl;
for(int p=1;p<=n;p++)
{
    for(int s=1;s<p;s++)
            cout<<" "<<"\t";
    for(int q=p;q<=j-1;q++)
    {

        cout<<K[p][q]<<"\t";
    }
    cout<<endl;
}*/
return m[1][n];
}
int main()
{
int n,i;
cout<<"Enter number of matrices: ";
cin>>n;
int arr[n+1];
cout<<"Enter dimensions: \n";
for(i=0;i<=n;i++)
{
cout<<"Enter d"<<i<<" = ";
cin>>arr[i];
}
cout<<"\nMinimum number of multiplications is: "<<MatrixChainMultiplication(arr, n);
cout<<"\n\n";
return 0;
}
