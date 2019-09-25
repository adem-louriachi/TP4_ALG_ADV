//#ifndef LIST_HPP
//#define LIST_HPP
//#include <iostream>
//#include <memory>

//#include "node.hpp"


//template <typename T>
//class CList
//{
//private:
//    std::shared_ptr<CNode<T>> m_fictionalHead;
//    std::shared_ptr<CNode<T>> m_fictionalTail;

//public:
//    CList ();
//    ~CList () {}


//    void Swap(std::shared_ptr<CNode<T>> a, std::shared_ptr<CNode<T>> b); //va peut-être servir plus tard pour le LRU, mais genre peut-être vite fait
//    void Show () const;
//    std::shared_ptr<CNode<T>> Find (const T & val) const;

//    void AddAfter (const std::shared_ptr<CNode<T>> &, const T & val);
//    void AddBefore (const std::shared_ptr<CNode<T>> &, const T & val);
//    void Remove (std::shared_ptr<CNode<T>>&);

//    //const std::shared_ptr<CNode<T>> & Begin () const;

//    void push_front (const T & val);
//    void push_back  (const T & val);
//};

//template <typename T>
//CList<T>::CList () : m_fictionalHead (new CNode<T> ()), m_fictionalTail (new CNode<T> ())
//{
//    m_fictionalTail->SetPrevNode (m_fictionalHead);
//    m_fictionalHead->SetNextNode (m_fictionalTail);
//}

//template <typename T>
//void CList<T>::Show () const
//{
//    //for (CNodeInt* Ptr (m_Head); Ptr; ++*Ptr)

//    for (std::shared_ptr<CNode<T>> Ptr (m_fictionalHead -> GetNextNode()); Ptr != m_fictionalTail; Ptr = Ptr->GetNextNode ())
//            std::cout << Ptr->GetData() << "; ";
//    std::cout << std::endl;
//}

//template <typename T>
//std::shared_ptr<CNode<T>> CList<T>::Find (const T & val) const
//{
//    std::shared_ptr<CNode<T>> Ptr (m_fictionalHead->GetNextNode ());
//    for (; Ptr != m_fictionalTail && Ptr -> GetData () != val ; Ptr = Ptr->GetNextNode ());

//    return (Ptr == m_fictionalTail ? nullptr : Ptr);
//}

//template <typename T>
//void CList<T>::AddAfter (const std::shared_ptr<CNode<T>> & ptr, const T & val)
//{
//    std::shared_ptr<CNode<T>> tmp (new CNode<T> (val, ptr, ptr-> GetNextNode()));
//    //ptr -> SetNextNode (tmp);
//    tmp->GetNextNode () ->SetNextNode (ptr);
//    //suivant = suivant de ptr
//    ptr ->SetPrevNode(tmp);
//    //precedent = ptr
//}

//template <typename T>
//void CList<T>::AddBefore (const std::shared_ptr<CNode<T>> & ptr, const T & val)
//{
//    std::shared_ptr<CNode<T>> tmp (new CNode<T> (val, ptr, ptr-> GetPrevNode()));
//    ptr->SetNextNode(tmp);
//    //suivant = ptr
//    tmp->GetPrevNode()->SetPrevNode(ptr);
//    //precedent = precedent de ptr
//}

//template <typename T>
//void CList<T>::Remove (std::shared_ptr<CNode<T>> & pDelete)
//{
//    std::shared_ptr<CNode<T>> pFind (m_fictionalHead);
//    for ( ; pFind -> GetNextNode () != pDelete ; pFind = pFind -> GetNextNode ());

//    pFind -> SetNextNode (pDelete -> GetNextNode ());
//    pDelete -> GetNextNode () -> SetPrevNode (pFind);

//    pDelete -> SetNextNode (nullptr);
//    pDelete -> SetPrevNode (nullptr);
//}


//template <typename T>
//void CList<T>::push_front (const T & val)
//{
//    AddAfter(m_fictionalHead, val);
//}

//template <typename T>
//void CList<T>::push_back (const T & val)
//{
//    AddBefore (m_fictionalTail, val);
//}

//template <typename T>
//void Link(std::shared_ptr<CNode<T>> tmp) {
//    tmp->SetNextNode(tmp);
//    tmp->SetPrevNode(tmp);
//    ;
//}

//#endif // LIST_HPP
