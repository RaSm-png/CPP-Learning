#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2, 6);
    v.insert(v.end() - 3, 9);

    // for each loop
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    // v.pop_back();
    v.erase(v.end() - 1);
    // while loop

    int i = 0;
    while (i < v.size())
    {
        cout << v[i++] << " ";
    }
    cout << endl;

    return 0;
}