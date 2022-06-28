#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // Creation of stack
    stack<int>st;
    // Push Operation
    st.push(1);
    cout<<st.top()<<endl;
    st.push(2);
    cout<<st.top()<<endl;
    st.push(3);
    cout<<st.top()<<endl;

    // Pop from stack
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    

    //empty operation
    if(st.empty())
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"Stack is not empty."<<endl;
    }

    //Size of stack
    cout<<"Size of stack: "<<st.size()<<endl;

    return 0;
}