#include <iostream>

using namespace std;
class Queue
{
    int *ptr ;
    int size;
    int Front,Rear;
public:
    Queue(int _size=4)
    {
        size=_size;
        ptr=new int[size];
        Front=Rear=-1;
    }
    int isFull()
    {
        if(Front==0&&Rear==size||Rear==Front-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isEmpty()
    {
        if(Front==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void Enqueue(int d)
    {
        if(isFull()==1)
        {
            cout<<"fullllllllllll";
            return;
        }
        else if(Front==-1)
        {
            Front=Rear=0;
        }
        else if(Rear==size-1)
        {
            Rear=0;
        }
        else
        {
            Rear++;
        }
        ptr[Rear]=d;
    }
    int Dequeue(int &d)
    {
        if(isEmpty()==1)
        {
            cout<<"Queue is Empty";
            return 0;

        }

        d=ptr[Front];

        if(Front==Rear)
        {
            Front=Rear=-1;
        }
        else if(Front==size-1)
        {
            Front=0;
        }
        else  //Front in the middle
            Front++;
        return 1;
    }

};
int main()
{
    Queue q1;
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Enqueue(40);
    int x=0;
    if(q1.Dequeue(x)==1)
        cout<< x<< endl;
    if(q1.Dequeue(x)==1)
        cout<< x<< endl;
    if(q1.Dequeue(x)==1)
        cout<< x<< endl;
    if(q1.Dequeue(x)==1)
        cout<< x<< endl;
    if(q1.Dequeue(x)==1)
        cout<< x<< endl;
    return 0;;
}
