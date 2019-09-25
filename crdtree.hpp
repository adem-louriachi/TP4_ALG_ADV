#ifndef CRDTREE_HPP
#define CRDTREE_HPP
#include "node.hpp"
#include <iostream>

namespace  {
template<typename T>
void Add_Recur (const std::shared_ptr<CNode<T>> & ptr, const T & val) {

    if (ptr->GetData() > val) {

    if (ptr->GetLeftNode() == nullptr) {
        std::shared_ptr<CNode<T>> tempo (new CNode<T> (val));
        ptr->SetLeftNode(tempo);
        return;
        }
    else Add_Recur(ptr->GetLeftNode(), val);

    }

    else {
        if (ptr->GetRightNode() == nullptr) {
            std::shared_ptr<CNode<T>> tempo (new CNode<T> (val));
            ptr->SetRightNode(tempo);
            return;
            }
    else
        Add_Recur(ptr->GetRightNode, val);
    }
}

template <typename T>
void Show_Recur (const std::shared_ptr<CNode<T>> & ptr){
    if (ptr == nullptr) return;
        Show_Recur (ptr->getLeftNode());
        std::cout << ptr->GetData () << std::endl;
        Show_Recur (ptr->getRightNode());
}

template <typename T>
bool Find_Recur (const std::shared_ptr<CNode<T>> & ptr, const T & val) {
    if (ptr->GetData() == val) return true;

    if (ptr->GetData() > val) {
        ptr->GetLeftNode();
        return Find_Recur(ptr, val);

    }
    if (ptr->GetData < val) {
        ptr->GetRightNode();
        return Find_Recur(ptr, val);
    }
    if (ptr->GetData() == nullptr) return false;
}

}
template <typename T>
class CRDTree {
    private :
        std::shared_ptr<CNode<T>> t_Head;
    public:
        CRDTree (const T &  val) : t_Head(std::shared_ptr<CNode<T>>(val)) {}
        ~CRDTree ();

        void Show () const;
        void Add (const T & val);
        bool Find (const T & val) const;
};

template<typename T>
void CRDTree<T>::Add (const T & val) {
    Add_Recur(t_Head, val);
}

template<typename T>
void CRDTree<T>::Show () const {
    std::cout << t_Head->GetData () << std::endl;
        Show_Recur (t_Head->getLeftNode());
        Show_Recur (t_Head->getRightNode());
}

template<typename T>
bool CRDTree<T>::Find (const T & val) const {
    if(t_Head->GetData() < val)return false;
    if(t_Head->GetData() == val)return true;
}

#endif // CRDTREE_HPP
