#include<bits/stdc++.h>

// @Copyright Rakib 

using namespace std;

//stack using Static array.
 const int max_size = 500;

class Stack{
public:

   
    int a[max_size];
    int stack_size;

    Stack(){
        stack_size = 0;
    }
    // add an element in the stack in O(1).
    void Push(int value)
    {
        if (stack_size+1 > max_size)
        {
            cout<<"Stack is Full\n";
            return;
        }
        stack_size = stack_size+1;
        a[stack_size-1] = value;

    }
    // Delete an element in the stack in O(1).

    void Pop()
    {
        if (stack_size == 0)
        {
            cout<<"Stack Is Empty\n";
            return;
        }

        a[stack_size-1] = 0;
        stack_size = stack_size - 1;
        
    }

    // print top element in the stack in O(1).
    void Top()
    {
        if (stack_size == 0)
        {
            cout<<"Stack Is Empty\n";
            return;
        }

       // return a[stack_size-1];
       cout<<a[stack_size-1]<<"\n";
        
    }
};


int main()
{
    Stack st;

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