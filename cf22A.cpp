#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;

    set<int>s;

    for (int i = 0 ; i < n ;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() < 2)
    {
        cout << "NO" << endl;
    }
    else{
        auto it = s.begin();
        advance(it , 1);
        cout << *it << endl;

        //cout << *(++s.begin()) << endl;
    }
}
