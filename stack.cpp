#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>st;

    //push
    st.push(30);
    st.push(20);
    st.push(10);

    //size
    cout<<"Size is "<<st.size()<<"\n";

    //pop
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();

    cout<<"Size is "<<st.size()<<"\n";

  

    return 0;
}