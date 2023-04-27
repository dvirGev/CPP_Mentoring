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
    Node *end;
public:
    List()
    {
        start = nullptr;
        end = nullptr;
    }
    List &add(T val)
    {
        if(start == nullptr)
        {
            start = new Node;
            start->val = val;
            start->next = nullptr;
            end = start;
        }
        else
        {
            end->next = new Node;
            end = end->next;
            end->val = val;
            end->next = nullptr;
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
    friend ostream &operator<<(ostream &os, const List<T> &ls)
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
            Node *temp = start->next;
            delete start;
            start = temp;
        }
    }
};

