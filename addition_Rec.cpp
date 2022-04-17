#include<iostream>
using namespace std;
int p=0;
int add(int n)
{

    cout<<p;
    if (n!=0)
    {
        p=p+5;

        cout<<"+";
        return n+add(n-5);

    }


        return 0;

}
int main()
{
   cout<<"\n\nSum is :"<<  add(100);
   cout<<endl<<endl<<endl;
}
