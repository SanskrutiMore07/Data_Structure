
// program to impliment Queue using array


#include<iostream>

using namespace std;


#define max 5

class Queue

{

public:

int front,rear,arr[max],item;

Queue()

{

front=rear=-1;

}

void enqueue(int item);

void dequeue();

void peek();

void display();

};

void Queue::enqueue(int item)

{

if(rear==max-1)

{

cout<<"\nQueue is Full (Queue is overflow)";

}

else if(rear==-1 && front==-1)

{

rear=front=0;

arr[rear]=item;

cout<<"\nInserted element is:"<<item;

}

else

{

rear=rear+1;

arr[rear]=item;

cout<<"\nInserted element is:"<<item;

}

}

void Queue::dequeue()

{

int item;

if(front==-1 && rear==-1)

{

cout<<"\nQueue is empty(Queue is underflow)";

}

else if (front==rear)

{

item=arr[front];

cout<<"\nDeleted item is:"<<item;

front = rear=-1;

}

else

{

item=arr[front];

cout<<"\nDeleted item is:"<<item;

front=front+1;

}

}

void Queue::peek()

{

int item;

if(front==-1 && rear==-1)

{

cout<<"\nQueue is empty";

}

else

{

item=arr[front];

cout<<"\nItem at the front position is:"<<item;

}

}

void Queue::display()

{

if(rear==-1 && front==-1)

{

cout<<"\nQueue is empty(Queue is underflow)";

}

else

{

cout<<"\nQueu elements are:";

for(int i=front;i<=rear;i++)

{

cout<<" "<<arr[i];

}

}

}

int main()

{

Queue q;

q.enqueue(10);

q.enqueue(20);

q.enqueue(30);

q.enqueue(40);

q.enqueue(50);

q.enqueue(60);

q.display();

q.peek();

q.dequeue();

q.dequeue();

q.dequeue();

q.dequeue();

q.dequeue();

q.dequeue();

return 0;

}








