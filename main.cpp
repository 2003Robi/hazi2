#include <iostream>

using namespace std;

int main()
{
    int n,k,nr,i,a[100],p=0,x;
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;
    for(i=0 ; i<n ; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(i=0 ; i<n ; i++)
    {
        x=a[i];
        nr=0;
        while(x!=0)
        {
           nr++;
           x=x/10;
        }
        if(nr>k)
            p++;

    }
    cout<<p;
    return 0;
}
