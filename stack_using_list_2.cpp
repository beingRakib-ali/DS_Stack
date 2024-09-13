#include<bits/stdc++.h>

using namespace std;

void print(list<int>l)
{
    //set the a in head pointing point 

   // list<int>::iterator a = l.begin();
     // auto it = l.begin();   same as upper line auto is updated its understand type of values.
    auto a = l.begin();

    while (a != l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
    
}

//wrost case O(n), best case O(1).
void Insert(list<int>&l,int index,int value)
{

    auto it = l.begin(); // it point to the head value O(1).
    advance(it,index); // traverse index for push value using advance keyward in c++, O(index).
    l.insert(it,value); // push value O(1).
}

void Delete(list<int>&l,int index)
{
    auto it = l.begin();
    advance(it,index); // traverse index for push value using advance keyward in c++, O(index).
    l.erase(it); // erase element O(1).
}

int main()
{

 list<int> l;

  cout<<"Push Element\n";
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

 cout<<"Pop Element\n";
 //pop element in front O(1).
 l.pop_front();
 l.pop_front();
 print(l);

 //pop element in back O(1).

 l.pop_back();
 l.pop_back();
 print(l);

 cout<<"Insert Element\n";
// insert element O(n).
 Insert(l,2,100);
 print(l);
 Insert(l,1,50);
 print(l);



 cout<<"Delete Element\n";
 //delete element O(n).
 Delete(l,2);
 print(l);
 Delete(l,2);
 print(l);
 
 // print size of linkedlist

 cout<<"size\n"<<l.size()<<"\n";  


    return 0;
}