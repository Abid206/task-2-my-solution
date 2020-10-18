#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int in = max_element(v.begin(), v.end())-v.begin();

    cout<< in<<endl;

    return 0;
}

