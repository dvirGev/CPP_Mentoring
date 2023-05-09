#include <iostream>
#include <algorithm>
#include <vector>
#include "List.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    List<int> ls;
    ls.add(1).add(2).add(0).add(4).add(3);
    for (auto it = ls.begin(); it != ls.end(); ++it)
    {
        cout << (*it) << ", ";
    } // prints: 1, 2, 0, 4, 3,
    cout << endl;
    
    for (auto element : ls)
    {
        cout << element << ", ";
    }  // prints: 1, 2, 0, 4, 3,
    cout << endl;

    auto min = min_element(ls.begin(), ls.end());
    auto max = max_element(ls.begin(), ls.end());
    cout << *min << endl;
    cout << *max << endl;
    
    vector<int> vec = {1,2,0,4,3};
    sort(vec.begin(), vec.end());
    for (auto x : vec)
    {
        cout << x << ", ";
    }
    cout << endl;
    return 0;
}
