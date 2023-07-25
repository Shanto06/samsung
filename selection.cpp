#include <bits/stdc++.h>
using namespace std;

void selection(vector<int>&v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        int min = i;

        for(int j=i+1; j<v.size(); j++)
        {
            if(v[min] > v[j])
            {
                min = j;
            }
        }
        if(min != i)
        swap(v[min], v[i]);
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
    selection(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
