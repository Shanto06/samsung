#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int l, int h)
{
    int pivot = v[l];
    int i = l, j = h;

    while(i<j)
    {
        while(v[i] <= pivot)
            i++;
        while(v[j] > pivot)
            j--;
        if(i<j)
            swap(v[i], v[j]);
    }
    swap(v[l], v[j]);

    return j;
}

void quicksort(vector<int> &v, int l, int h)
{
    if(l<h)
    {
        int p = partition(v, l, h);
        quicksort(v, l, p-1);
        quicksort(v, p+1, h);
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
    quicksort(v, 0, n);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
