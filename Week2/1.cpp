#include<bits/stdc++.h>
using namespace std;

int first(int a[],int n,int key)
{
    int l=-1,h=n;

    while(h-l>1)
    {
        int mid=l+(h-l)/2;

        if(a[mid]>=key)
        {
            h=mid;
        }
        else
        {
            l=mid;
        }
    }

    return h;
}

int second(int a[],int n,int key)
{
    int l=-1,h=n;

    while(h-l>1)
    {
        int mid=l+(h-l)/2;

        if(a[mid]<=key)
        {
            l=mid;
        }
        else
        {
            h=mid;
        }
    }

    return l;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int key;
        cin>>key;

        int f=first(a,n,key);
        int l=second(a,n,key);

        if(a[f]!=key)
        {
            cout<<"Key not present"<<endl;
        }
        else
        {
            cout<<key<<" - "<<(l-f+1)<<endl;
        }
    }

    return 0;
}
