#include "ColaLista.cpp"

int main() {

    ColaLista<int> *cl = new ColaLista<int>;
    cl->enqueue(new int(10));
    //cout<<cl->size()<<endl;
    cl->enqueue(new int(20));
    //cout<<cl->size()<<endl;
    cl->enqueue(new int(30));
    //cout<<cl->size()<<endl;
    //cl->enqueue(new int(40));
    //cout<<cl->size()<<endl;
    //cl->enqueue(new int(50));
    cout<<"SIZE : "<<cl->size()<<endl;
    cout<<cl->toString();
/*    cout<<"Los Valores de la cola"<<endl;
    cout<<*cl->front()<<"\t";
    cl->dequeue();
    cout<<*cl->front()<<"\t";
    cl->dequeue();
    cout<<*cl->front()<<"\t";
    cl->dequeue();
    cout<<*cl->front()<<"\t";
    cl->dequeue();
    cout<<*cl->front()<<"\t";
    cl->dequeue();
    delete cl;*/

    return 0;
}
