#include <iostream>
#include <cstring>
using namespace std;
struct node
{
    int id;
    char name[10];
    node * next;
};
class Queue
{
    node *Front,*Rear;
public :
    Queue ()
    {
        Front=Rear=NULL;
    }
    void Enqueue(int id, char * name)
    {
        node * temp=new node();
        temp->id=id;
        strcpy(temp->name,name);
        temp->next=NULL;
        if(Front ==NULL)
        {
            Front=Rear=temp;
        }
        else
        {
            Rear->next=temp;
            Rear=temp;
        }
    }
    node Dequeue()
    {
        node res;
        res.id=-1;
        if(Front!=NULL)
        {
            res.id=Front->id;
            strcpy(res.name,Front->name);
            node * temp=Front;
        }
        if(Front==NULL)
        {
            Rear=NULL;
        }
        return res;
    }
     ~Queue (){
         cout<<"dessssssss";
     }
};
int main() {
    Queue q1;
    q1.Enqueue(1, "salma");
    q1.Enqueue(2, "adel");
    node Node = q1.Dequeue();
    cout << Node.id << "," << Node.name << endl;
    return 0;
}
