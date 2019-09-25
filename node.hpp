#ifndef NODE_HPP
#define NODE_HPP

#include <memory>

template <typename T>
class CNode
{
private:
    T m_Data;
    std::shared_ptr<CNode> m_LC;
    std::shared_ptr<CNode> m_RC;
public:
    //constructor
    CNode (const T &  val = T(), const std::shared_ptr<CNode> & ptrLeft = nullptr, const std::shared_ptr<CNode> & ptrRight = nullptr);
    //destructor
    ~CNode ();

    //getter / setter
    const T &GetData () const;
    const std::shared_ptr<CNode> & GetLeftNode () const;
    const std::shared_ptr<CNode> & GetRightNode () const;
    void SetData (const T & val);
    void SetRightNode (const std::shared_ptr<CNode> &);
    void SetLeftNode (const std::shared_ptr<CNode> &);
};


template <typename T>
CNode<T>::CNode (const T & val, const std::shared_ptr<CNode> & ptrLeft, const std::shared_ptr<CNode> & ptrRight ) :
    m_Data (val), m_LC (ptrLeft), m_RC (ptrRight)
{
}

template <typename T>
CNode<T>::~CNode ()
{
    //delete m_Next;
    //cout << m_Data << endl;
}

template <typename T>
const T & CNode<T>::GetData () const
{
    return m_Data;
}

template <typename T>
const std::shared_ptr<CNode<T>> &CNode<T>::GetLeftNode() const
{
    return m_LC;
}

template <typename T>
const std::shared_ptr<CNode<T>> & CNode<T>::GetRightNode () const
{
    return m_RC;
}


template <typename T>
void CNode<T>::SetData (const T & val)
{
    m_Data = val;
}

template <typename T>
void CNode<T>::SetRightNode (const std::shared_ptr<CNode> & ANode)
{
    m_RC = ANode;
}

template <typename T>
void CNode<T>::SetLeftNode(const std::shared_ptr<CNode> & ANode)
{
    m_LC = ANode;
}

#endif // NODE_HPP
