#include <iostream>

class Node
{
public:
    int data;
    Node* next;
    Node(int _data) : data(_data), next(NULL) {}
};

class Stack
{
public:
   Stack()
    {
        this->head = NULL;
    }

    Node* head;

    void Add(int _value)
    {
        Node* newNode = new Node(_value);
        newNode->next = head;
        head = newNode;
    }

    void Delete()
    {
        if (head == NULL)
        {
            std::cout << "Стек пуст.\n";
        }
        else
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void show_all()
    {
        if (head == NULL)
        {
            std::cout << "Стек пуст.\n";
        }
        else
        {
            Node* tmp_node = head;
            while (tmp_node != NULL)
            {
                std::cout << tmp_node->data << " ";
                tmp_node = tmp_node->next;
            }
            std::cout << std::endl;
        }
    }

    void show_head()
    {
        if (head == NULL)
        {
            std::cout << "Стек пуст.\n";
        }
        else
        {
            std::cout << head->data;
        }
    }
};

int main()
{
    Stack stack;
    stack.Add(1);
    stack.Add(2);
    stack.Add(3);
    stack.Add(4);
    stack.Add(5);
    stack.Add(6);
    
    stack.Delete();
    stack.show_all();
    stack.show_head();


    return 0;
}
