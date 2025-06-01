#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    for (int i = 0; i < 6; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << "Enter x: ";
    int x;
    cin >> x;
    int ans = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}