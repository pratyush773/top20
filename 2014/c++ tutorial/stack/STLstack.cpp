//illustration of STL stack opearations
#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    for(int i = 1; i<=10; i++)
      s.push(i);
    cout<<"stack size:"<<s.size()<<endl;
    cout<<"stack elements:"<<endl;
    while(!s.empty()) {
      cout<<s.top()<<" ";
      s.pop();
    }   
    getchar();
}

                                                                                                      
