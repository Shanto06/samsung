#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &v, int n, int x)
{
    int large = x;
    int l = 2*x+1;
    int r = 2*x+2;

    if(l<n && v[large] < v[l])
        large = l;
    if(r<n && v[large] < v[r])
        large = r;

    if(large != x)
    {
        swap(v[x], v[large]);

        heapify(v, n, large);
    }
}

void heapsort(vector<int> &v)
{
    int n=v.size();

    for(int i = (n/2-1); i>=0; i--)
    {
        heapify(v, n, i);
    }

    for(int i = n-1; i>=0; i--)
    {
        swap(v[0], v[i]);
        heapify(v, i, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    heapsort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

