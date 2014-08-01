#include "lista.h"

void List::add (int data)
{
    List * nowy = (List*)malloc(sizeof(List));
    nowy->data = data;
    nowy->next = first;
    first = nowy;
}

void List::add_end (int data)
{
    List * nowy = (List*)malloc(sizeof(List));
    nowy->data = data;
    nowy->next = NULL;

    if (first != NULL)
    {
        List*tmp = first;
        while(tmp->next)
            tmp=tmp->next;
        tmp->next = nowy;
    }
    else
    {
        first = nowy;
    }
}

void List::show()
{
    List *item = first;
    while(item)
    {
        cout<< item->data << " " ;
        item = item->next;
    }
    cout<<endl;
}

void List::free_all()
{
    List *item = first;
    for(int i=0; item; i++)
    {
        cout<<"freed: "<<item->data<<endl;
        free(item);
        item = item->next;
    }
}

void List::free_i(int iterat)
{
    List *item = first;
    for (int i=0;i<iterat-1;i++) item=item->next;

    {
        List *tmp=item->next;
        item->next = item->next->next;
        item=tmp->next;
        //cout<<"freed: "<<item->data<<endl;
        free(item);
    }
    cout<<endl;
}

int main()
{

    List ls;
    ls.add(1);
    ls.add(2);
    ls.add(3);
    ls.show();
    //ls.free_i(1);
    ls.show();
    ls.add(4);
    ls.show();
    return 0;
}
