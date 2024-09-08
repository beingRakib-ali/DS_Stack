#include <bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    // Inserts the given data at the given index O(n)
    void Insert(int index, T data)
    {
        if (index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node<T> *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node<T> *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node<T> *b = a->nxt;
        if (b != NULL)
        {
            b->prv = newnode; // Check if 'b' is NULL before accessing 'prv'
        }
        a->nxt = newnode;
        sz++;
    }

    // Delete at head O(1).
    void DeleteAtHead()
    {
        if (head == nullptr)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = a->nxt;
        delete a;

        if (b != nullptr)
        {
            b->prv = nullptr;
        }
        head = b;
        sz--;
    }

    // Deletes the given index O(n)
    void Delete(int index)
    {
        if (index >= sz)
        {
            cout << index << " doesn't exist.\n";
            return;
        }
        node<T> *a = head;
        int cur_index = 0;
        while (cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node<T> *b = a->prv;
        node<T> *c = a->nxt;
        if (b != NULL)
        {
            b->nxt = c;
        }
        if (c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
    }

    // Prints the linked list O(n)
    void Traverse()
    {
        node<T> *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    // Reverse the doubly linked list O(n)
    void Reverse()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        int cur_index = 0;
        while (cur_index != sz - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node<T> *b = head;
        while (b != NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
};

template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    Stack() {}

    // Returns the top element of the stack
    T Top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is Empty\n";
            return T(); // Return default value of T
        }
        return dl.head->data;
    }

    // Pushes a new element onto the stack
    void Push(T value)
    {
        dl.InsertAtHead(value);
    }

    // Pops the top element from the stack and returns it
    T Pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is Empty\n";
            return T(); // Return default value of T
        }
        T topValue = dl.head->data; // Save the data before deleting
        dl.DeleteAtHead();
        return topValue; // Return the saved data
    }

    // Returns the size of the stack
    int getSize()
    {
        return dl.getSize();
    }

    // Traverses the stack and prints its elements
    void Travers()
    {
        dl.Traverse();
    }
};

int main()
{
    Stack<int> st;

    st.Push(5);
    cout << st.Top() << "\n";

    st.Push(10);
    cout << st.Top() << "\n";

    st.Push(15);
    cout << st.Top() << "\n";

    // if (st.getSize() > 0)
    // {
    //     cout << st.Top() << "\n";
    // }
    // else
    // {
    //     cout << "Stack is Empty\n";
    // }

    Stack<int> tmp;

    while (st.getSize() > 0)
    {
        tmp.Push(st.Pop());
    }
    swap(st, tmp);

    st.Travers();

    return 0;
}
