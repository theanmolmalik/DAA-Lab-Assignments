#include<bits/stdc++.h>
using namespace std;

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

        int l=0,h=n-1,mid;
        int count=0;
        bool flag=false;

        while(l<=h)
        {
            count++;

            mid=l+(h-l)/2;

            if(a[mid]==key)
            {
                flag=true;
                break;
            }
            else if(a[mid]<key)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }

        if(a[l]==key || a[h]==key)
        {
            flag=true;
        }

        if(flag)
        {
            cout<<"Present ";
        }
        else
        {
            cout<<"Not Present ";
        }

        cout<<count<<endl;
    }

    return 0;
}