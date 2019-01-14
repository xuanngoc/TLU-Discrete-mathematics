#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"
template<class T>
class Queue
{
private:
    Node<T>* head;
public:
    Queue()
    {
        head = 0;
    };
    void EnQueue(T t)
    {
        Node<T> *n = new Node<T>;
        n->data =t;
        n->next =0;
        if(head ==0)
        {
            head = n;
        }
        else
        {
            Node<T> *p = head;
            while( p-> next != 0)
            {
                p = p->next;
            }
            p -> next = n;
        }
    };
    T DeQueue()
    {
        T t = head -> data;
        Node<T> *p= head;
        head = head -> next;
        delete p;
        return t;

    };
};
#endif