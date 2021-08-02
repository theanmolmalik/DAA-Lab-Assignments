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

        int comp=0,shifts=0;

        for(int i=1;i<n;i++)
        {
            int j=i-1;
            int temp=a[i];

            while(j>-1 && a[j]>temp)
            {
                a[j+1]=a[j];
                j--;
                shifts++;
                comp++;
            }

            shifts++;
            a[j+1]=temp;
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;

        cout<<"comparisons = "<<comp<<endl;

        cout<<"shifts = "<<shifts<<endl;
    }

    return 0;
}
