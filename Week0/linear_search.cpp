#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int count=0;
    bool present=false;

    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]==key)
        {
            present=true;
            break;
        }
    }

    if(present)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    cout<<count<<endl;

    return 0;
}