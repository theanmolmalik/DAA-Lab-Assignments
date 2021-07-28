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

        int count=0;
        bool flag=false;

        for(int i=0;i<n;i++)
        {
            count++;
            if(a[i]==key)
            {
                flag=true;
                break;
            }
        }

        if(flag)
        {
            cout<<"Present"<<" ";
        }
        else
        {
            cout<<"Not Present"<<" ";
        }

        cout<<count<<endl;
    }

    return 0;
}