#include "../include/List.hpp"
using namespace std;

List::List()
{
    this->head = nullptr;
    this->tail = nullptr;
}

List::~List()
{
    delete head;
}

List::List( int val )
{
    this->head = new Node(val);;
    this->tail = head;
}

void List::show()
{
    std::cout << "\nPrinting all elements...\n";
    Node* c = head;

    if(isEmpty())
        std::cout << "The list is empty.\n";
    else
    {
        while(c)
        {
            std::cout << c->getValue() << std::endl;
            c = c->getNext();
        }
        std::cout << std::endl;
    }
}

bool List::isEmpty()
{
    return (head == nullptr);
}

void List::setBegin( int val )
{
    Node* newNode = new Node(val);

    if(isEmpty())
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->setNext(head);
        head = newNode;
    }
}

void List::setEnd( int val )
{
    Node* newNode = new Node(val);

    if(isEmpty())
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->setNext(newNode);
        tail = newNode;
    }
}

int List::size()
{
    if(isEmpty())
        return 0;

    Node* c = head;
    int size = 0;
    
    do
    {
        c = c->getNext();
        size++;
    }
    while(c);
    
    return size;
}

bool List::exist( int val )
{
    if(isEmpty())
        return false;

    Node* c = head;
		
    while(c)
    {
        if(c->getValue() == val)
            return true;
        c = c->getNext();
    }
    return false;
}

void List::remove()
{
    if(!isEmpty())
    {
        if(head->getNext() == nullptr)
            head = nullptr;
        else if(head->getNext()->getNext() == nullptr)
            head->setNext(nullptr);
        else
        {
            Node* ant_ant = head;
            Node* ant = head->getNext();
            Node* chain = head->getNext()->getNext();

            while(chain)
            {
                Node* aux = ant;
                ant = chain;
                ant_ant = aux;
                chain = chain->getNext();
            }
            delete ant_ant->getNext();
            ant_ant->setNext(nullptr);
            tail = ant_ant;
        }
    }
}

int main(int argc, char *argv[])
{
	List l;
	
	if(l.isEmpty())
		std::cout << "List isEmpty!!\n";
	else
		std::cout << "List NAO isEmpty!!\n";
	
	l.show();
	
	if(l.exist(10))
		std::cout << "\nO elemento 10 exist na lista!!\n";
	else
		std::cout << "\nO elemento 10 NAO exist na lista!!\n";
	
	l.setEnd(10);
	l.setEnd(20);
	l.setEnd(30);
	l.setEnd(40);
	l.setBegin(50);
	
	l.show();
	
	if(l.isEmpty())
		std::cout << "List isEmpty!!\n";
	else
		std::cout << "List NAO isEmpty!!\n";
	
	if(l.exist(10))
		std::cout << "\nO elemento 10 exist na lista!!\n";
	else
		std::cout << "\nO elemento 10 NAO exist na lista!!\n";
	
	l.remove();
	
	l.show();
	
	std::cout << "Tamanho da lista: " << l.size() << std::endl;
	
	return 0;
}