#include <iostream>
#include "List.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    List<int> list;
    list.add(0).add(1).add(2).add(3).add(4);
    cout << list[2] << endl;
    cout << list << endl;
    return 0;
}
