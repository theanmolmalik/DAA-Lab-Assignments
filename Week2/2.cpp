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

        bool flag=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=a[i]+a[j];

                for(int k=j+1;k<n;k++)
                {
                    if(sum==a[k])
                    {
                        cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                        flag=1;
                        break;
                    }
                }

                if(flag)
                {
                    break;
                }
            }

            if(flag)
            {
                break;
            }
        }

        if(flag==0)
        {
            cout<<"No sequence found."<<endl;
        }
    }

    return 0;
}
