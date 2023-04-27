#include <iostream>
using namespace std;
template <class T>
class List
{
private:
    struct Node
    {
        T val;
        Node *next;
    }; 
    Node *start;
    Node *last;

public:
    List(/* args */)
    {
        start = nullptr;
        last = nullptr;
    }
    List &add(T val)
    {
        if (last == nullptr)
        {
            start = new Node;
            start->val = val;
            start->next = nullptr;
            last = start;
        }
        else
        {
            last->next = new Node;
            last = last->next;
            last->val = val;
            last->next = nullptr;
        }
        return *this;
    }
    T operator[](size_t index)
    {
        Node *temp = start;
        for (size_t i = 0; i < index; i++)
        {
            if(temp == nullptr)
            {
                string messages = "index ";
                messages += index + " out of range";
                throw messages;
            }
            temp = temp->next;
        }
        return temp->val;
    }
    friend ostream& operator<<(ostream& os, const List& ls)
    {
        os << '[';
        Node *index = ls.start;
        while (index != nullptr)
        {
            os << index->val << ", ";
            index = index->next;
        }
        os << ']';
        return os;
    }
    ~List()
    {
        while (start != nullptr)
        {
            Node *temp = start;
            start = start->next;
            delete(temp);
        }
        
    }
};

