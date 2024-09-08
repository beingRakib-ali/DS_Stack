#include <bits/stdc++.h>

// @Copyright Rakib 
using namespace std;

// Stack using dynamic array.
template<class T> // Corrected template syntax
class Stack{
public:

    T *a;
    int stack_size;
    int array_cap;

    Stack() {
        a = new T[1];
        stack_size = 0;
        array_cap = 1;
    }

    // Increase size when stack is full.
    void increase_Size() {
        T *temp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++) {
            temp[i] = a[i];
        }
        delete[] a;  // Correct deletion
        a = temp;    // Assign temp to a

        array_cap = array_cap * 2;
    }
    
    // Add an element in the stack in O(1).
    void Push(T value) { // Changed int to T
        if (stack_size + 1 > array_cap) {
            increase_Size();
        }
        a[stack_size] = value;
        stack_size++;
    }

    // Delete an element in the stack in O(1).
    void Pop() {
        if (stack_size == 0) {
            cout << "Stack Is Empty\n";
            return;
        }
        stack_size--;
    }

    // Print top element in the stack in O(1).
    void Top() {
        if (stack_size == 0) {
            cout << "Stack Is Empty\n";
            return;
        }
        cout << a[stack_size - 1] << "\n";
    }
};

int main() {
    Stack<int> st;  // Specify type for template class

    st.Push(5);
    st.Top();

    st.Push(10);
    st.Top();

    st.Push(15);
    st.Top();

    st.Pop();
    st.Top();

    st.Pop();
    st.Top();

    st.Pop();
    st.Top();

    return 0;
}
