#include "common.h"

template <class T>
class ListNode
{
public:
    T val;
    ListNode* p_next;
public:
    explicit ListNode(T _val, ListNode* next = nullptr)
        : val(_val), p_next(next)
        {}
};