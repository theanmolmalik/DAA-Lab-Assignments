#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h) 
{
    int pivot=a[h];
    int i =l-1;

    for(int j=l;j<=h-1;j++) 
    {
        if(a[j]<pivot) 
        {
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[h]);

    return i+1;
}

void quick_sort(int a[], int l, int h) 
{
    if(l<h) 
    {
        int pi = partition(a, l, h);
        quick_sort(a, l, pi-1);
        quick_sort(a, pi+1, h);
    }
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
  
        quick_sort(a,0,n-1);

        int flag=0;

        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                flag=1;
                break;
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
