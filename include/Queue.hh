#include "Node.hh"
class Queue
{
private:
    Node* first{};//Si esta con llave abierta es nullptr
    Node* last{};
public:
    Queue();
    ~Queue();
    void Add(Book*);
    Node* Peek() const; //Regresa al que va frente de la cola
    void Pop();//Remueve al que va al frente de la cola
    bool IsEmpty() const;
    void Print();
};

