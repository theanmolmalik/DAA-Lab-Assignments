#include<bits/stdc++.h>
using namespace std;

void Jump_Search(int *a, int &n, int &key) 
{
    int jump = sqrt(n);
    int steps = jump;
    int last = 0;
    int comp = 0;
    bool flag = false;

    while(a[min(steps,n)-1]<key && last<n) 
    {
        comp ++;
        last = steps;
        steps += jump;
    }

    while(a[last]<key) 
    {
        last ++;
        if(min(steps,n)==last) 
        {
            break;
        }
        comp ++;
    }

    if(a[last]==key) 
    {
        flag=true;
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

int main() 
{
    int t;
    cin >> t;
    
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

        Jump_Search(a,n,key);
    }

    return 0;
}
