#include<bits/stdc++.h>

// @Copyright Rakib 
using namespace std;

//stack using dynamic array.
 

class Stack{
public:

    int *a;
    int stack_size;
    int array_cap;

    Stack(){

        a = new int[1];
        stack_size = 0;
        array_cap = 1;

    }
    //Increase size when stack is full.
    void increase_Size()
    {
        int *temp;
        temp = new int[array_cap*2];

        for (int i = 0; i < array_cap; i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        delete []temp;

        array_cap = array_cap*2;
    }
    
    // add an element in the stack in O(1).
    void Push(int value)
    {
        if (stack_size+1 > max_size)
        {
            increase_Size();
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

int main()
{




    return 0;
}