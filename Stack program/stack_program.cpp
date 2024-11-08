
        // Program To Impliment Stack Using Array

        #include<iostream>
        using namespace std;
        #define max 3
        class stack
        {
        public:
        int item,arr[max],Top;
        stack()
        {
        Top=-1;
        }
        void push(int item);
        void pop();
        void peek();
        void display();
        };
        void stack::push(int item)
        {
        if(Top==max-1)
        {
        cout<<"\nstack is overflow";
        }
        else
        {
        Top=Top+1;
        arr[Top]=item;
        cout<<"\npushed item is:"<<item;
        }
        }
        void stack::pop ()
        {
        if(Top<0)
        {
        cout<<"\nstack is underflow"<<endl;
        }
        else
        {
        item=arr[Top];
        Top--;
        cout<<"\n poped item is:"<<item;
        }
        }
        void stack::peek ()
        {
        if(Top<0)
        {
        cout<<"\nstack is empty"<<endl;
        }
        else
        {
        item=arr[Top];
        cout<<"\nTop Position Element Is:"<<item<<endl;
        }
        }
        void stack::display()
        {
        cout<<"stack element is :";
        for(int i=0;i<=Top;i++)
        {
        cout<<" "<<arr[i];
        }
        cout<<"\n";
        }
        int main()
        {
        stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.peek();
        s.display();
        s.pop();
        s.pop();
        s.peek();
        s.pop();
        s.pop();

        return 0;
        }

