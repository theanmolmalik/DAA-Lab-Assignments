#include<bits/stdc++.h>
using namespace std;

void b_search(int *a,int l,int h,int key,int comp) 
{
    bool flag = false;
    
    while(l <= h) 
    {
        int mid = (l+h)/2;
        if(a[mid] == key) 
        {
            comp ++;
            flag = true;
            break;
        }
        else if(a[mid] < key)
        {
            l = mid+1;
        }
        else 
        {
            h = mid-1;
        }
    
        comp ++;
    }

    if(flag)
    {
        cout<<"Present ";
    }    
    else        
    {
        cout<<"Not Present ";
    }

    cout<<comp<<endl;
}

void exponential_search(int *a,int &n,int &key) 
{
    int comp = 0;

    if(a[0] == key) 
    {
        comp ++;
        cout <<"Present " << comp;
        return ;
    }

    int i = 1;

    while(i < n && a[i] < key) 
    {
        i = i*2;
        comp ++;
    }

    b_search(a,i/2,min(i,n-1),key,comp);
}

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        int a[n];

        for(int i=0;i<n;i++) 
        {
            cin >> a[i];
        }

        int key;
        cin >> key;

        exponential_search(a,n,key);
    }
    return 0;
}
