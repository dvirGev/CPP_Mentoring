#include <iostream>
#include "List.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    List<double> ls;
    ls.add(0).add(1).add(2).add(3).add(4);
    cout << ls << endl;
    cout << ls[2] << endl;
    return 0;
}
