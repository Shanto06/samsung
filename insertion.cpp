#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int>&v)
{
    for(int i=1; i<v.size(); i++)
    {
        int key = v[i];
        int j= i-1;

        while(j>=0 && key < v[j])
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    insertion(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
