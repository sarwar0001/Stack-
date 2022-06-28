#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    //Properties
    public:
        int *arr;
        int top;
        int size;
    //Behaviour
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top=-1;
    }

    // Push operation
    void push(int elt)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=elt;
            cout<<arr[top]<<endl;
        }
        else
        {
            cout<<"Stack Overflow."<<endl;
        }
    }

    // Pop operation
    void pop()
    {
        if(top>=0)
        {
            top--;
            cout<<arr[top]<<endl;
        }
        else
        {
            cout<<"Stack Underflow."<<endl;
        }
    }

    // Peek Operation
    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty."<<endl;
        }
    }

    //Empty Operation
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(56);
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
    return 0;
}