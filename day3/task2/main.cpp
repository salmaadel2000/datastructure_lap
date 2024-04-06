#include <iostream>
using namespace std;
struct node
{
    int id;
    node * left;
    node * right;
};
class Bts
{
    node * root;
    node * findParent(int id)
    {
         node * temp=root;
        while(temp)
        {

            if(id<=temp->id&&temp->left==NULL)
            {
                return temp;
            }
            else if(id>=temp->id&&temp->right==NULL)
            {
                return temp;
            }
            else if(id<=temp->id)
            {
                temp=temp->left;
            }
            else if(id>temp->id)
            {
                temp=temp->right;
            }
        }
    }
    void inOrder(node *r){
        if(r==NULL)
            return ;

        inOrder(r->left);
            cout<<r->id <<endl;

         inOrder(r->right);


    }
public :
    Bts()
    {
        root=NULL;
    }
    void Add(int id)
    {
        node * temp=new node();
        temp->id=id;
        temp->left=NULL;
        temp->right=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            node * p=findParent(id);
                     if(id<p->id)
            {
                p->left=temp;
            }
            else
            {
                p->right=temp;
            }
        }
    }
    void inOrder(){
        inOrder(root);
    }
};
int main()
{
    Bts B1;
    B1.Add(100);
    B1.Add(20);
    B1.Add(70);
    B1.Add(60);
    B1.inOrder();
    return 0;
}
