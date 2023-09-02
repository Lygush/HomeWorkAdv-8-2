#include <iostream>
#include <vector>
#include <memory>

class node
{
public:
    int m_value;
    //std::shared_ptr<node> parent;
    node(int value) : m_value{ value } {};
    ~node() { std::cout << "destructor called\n"; }
};

int main()
{
    {
        auto node1 = std::make_shared<node>(1);
        auto node2 = std::make_shared<node>(2);
        
        //node1->parent = node2;
        //node2->parent = node1;

        std::cout << node1->m_value << " " << node2->m_value << "\n";
        std::swap(node1, node2);
        std::cout << node1->m_value << " " << node2->m_value << "\n";
    }

    return 0;
}