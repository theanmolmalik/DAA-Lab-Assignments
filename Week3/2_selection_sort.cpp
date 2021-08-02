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
  
        int comp=0,swaps=0;

        int i,j,k;

        for(i=0;i<n-1;i++)
        {
            k=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[k])
                {
                    k=j;
                }
                comp++;
            }
            swap(a[i],a[k]); 
            swaps++;
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;

        cout<<"comparisons = "<<comp<<endl;

        cout<<"swaps = "<<swaps<<endl;
    }

    return 0;
}
