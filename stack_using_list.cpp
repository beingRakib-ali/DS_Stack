#include<bits/stdc++.h>

using namespace std;

void print(list<int>l)
{
    //set the a in head pointing point 
    list<int>::iterator a = l.begin();

    while (a != l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
    
}


int main()
{

 list<int> l;
 // push element in front O(1).
 l.push_front(40);
 l.push_front(30);
 l.push_front(20);
 l.push_front(10);
 print(l);

 //push element in back O(1).
 l.push_back(50);
 l.push_back(60);
 print(l);

 //pop element in front O(1).

 l.pop_front();
 l.pop_front();
 print(l);

 //pop element in back O(1).

 l.pop_back();
 l.pop_back();
 print(l);


    return 0;
}