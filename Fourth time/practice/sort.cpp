#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Person
{
    string name;
    int age;
};
struct func
{
    bool operator()(Person &a, Person &b){return a.age < b.age;}
};

int main(int argc, char const *argv[])
{
    vector<Person> persons = {{"david", 50},{"yossi", 10}, {"shahar", 15}};
    sort(persons.begin(), persons.end(), func());
    return 0;
}
