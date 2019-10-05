#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    set<int> a;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.insert(t);
    }
    
    for ( it = a.begin(); it!=a.end(); it++)
    {
        /* code */
        cout<<*it<<" ";
    }
    cout<<endl;
}