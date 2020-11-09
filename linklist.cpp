#include "common.h"
#include "linklist.hpp"

ListNode<int>* head = nullptr;

void init_link_list()
{
    head = new ListNode<int>(1);
    auto l2 = new ListNode<int>(2);
    head->p_next = l2;
    auto l3 = new ListNode<int>(3);
    l2->p_next = l3;
    auto l4 = new ListNode<int>(4);
    l3->p_next = l4;
    auto l5 = new ListNode<int>(5);
    l4->p_next = l5;
    l5->p_next = nullptr;
}

template <class T>
ListNode<T>* reverse_link_list(ListNode<T>* head)
{
    if (head->p_next == nullptr)
    {
        return head;
    }
    auto p_reversed = reverse_link_list(head->p_next);
    p_reversed->p_next = head;
    head->p_next = nullptr;
}

void test_link_list()
{
    std::cout << "***test link list***" << std::endl;
    init_link_list();
    reverse_link_list(head);
}