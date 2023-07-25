#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& v, int l, int m, int r)
{
    int n = v.size();
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> v1;
    vector<int> v2;

    v1.resize(n);
    v2.resize(n);

    for (int i = 0; i < n1; i++)
    {
        v1[i] = v[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        v2[i] = v[m + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (v1[i] < v2[j])
        {
            v[k] = v1[i];
            i++;
        }
        else
        {
            v[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        v[k] = v1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        v[k] = v2[j];
        j++;
        k++;
    }
}

void mergesort(vector<int>& v, int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergesort(v, l, m);
        mergesort(v, m + 1, h);

        merge(v, l, m, h);
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
    mergesort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
