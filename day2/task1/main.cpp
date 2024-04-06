#include <iostream>
#include <string.h>
using namespace std;

struct  node
{
    int id;
    char name[10];
    node *prev;
};
class Stack
{
    node * tos;
public:
    Stack()
    {
        tos=NULL;
    }
    void push(int id,char * name)
    {
        node *temp=new node();
        temp->id=id;
        strcpy(temp->name,name);
        temp->prev=tos;
        tos=temp;

    }
    node pop()
    {
        node res;
        res.id=-1;
        if(tos!=NULL)
        {
            res.id=tos->id;
            strcpy(res.name,tos->name);
            node * temp=tos;
            tos=tos->prev;
            delete temp;
        }
        return res;
    }
    int isEmpty()
    {
        if(tos==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isFull()
    {
         node * temp=new node();
    if(temp == NULL)
    {
        return 1;
    }
    else
    {
        delete temp;
        return 0;
    }
    }
   ~Stack() {
        cout << "Destructor is here" << endl;
    }

};
int main() {
    Stack c1;
    c1.push(1, "salma");
    c1.push(2, "adel");
    node newNode = c1.pop();
    cout << newNode.id << "," << newNode.name << endl;
    return 0;
}
