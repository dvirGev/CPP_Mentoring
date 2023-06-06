#include <iostream>
#include <memory>
using namespace std;
template <typename T>
class Stack
{
    struct Node
    {
        T value;
        shared_ptr<Node> next;
    };

    class Iterator
    {
    private:
        shared_ptr<Node> ptr;
    public:
        Iterator(shared_ptr<Node> ptr): ptr(ptr){}
        Iterator &operator++()
        {
            ptr = ptr->next;
            return *this;
        }
        bool operator!=(const Iterator &other)
        {
            return ptr != other.ptr;
        }
        Node operator*()
        {
            return *ptr;
        }
    };

    
    shared_ptr<Node> head;

public:
    void push(T value)
    {
        auto newNode = make_shared<Node>();
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }
    T pop()
    {
        T res = head->value;
        head = head->next;
        return res;
    }
    Iterator begin()
    {
        return {head};
    }
    Iterator end()
    {
        return {nullptr};
    }
};
int main(int argc, char const *argv[])
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    for (auto i : s)
    {
        cout << i.value << endl;
    }
    return 0;
}
