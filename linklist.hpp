#include "common.h"

template <class T>
class ListNode
{
private:
    T val;
    ListNode* p_next;
public:
    ListNode(T _val, ListNode* next)
        : val(_val), p_next(next)
        {}
};