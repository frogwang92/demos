#include "common.h"
#include <list>

using namespace std;

static std::list<int> lst{1,2,3,4,5};

void traverse_node(const std::list<int>& list, std::list<int>::const_iterator curr)
{
    if (curr == list.end())
    {
        return;
    }
    cout << (*curr) << endl;
    traverse_node(list, ++curr);
}
void reverse_traverse_node(const std::list<int>& list, std::list<int>::const_iterator curr)
{
    if (curr == list.end())
    {
        return;
    }
    std::list<int>::const_iterator next = curr;
    reverse_traverse_node(list, ++next);
    cout << (*curr) << endl;
}
void traverse_list(const std::list<int>& list)
{
    traverse_node(list, list.begin());
    reverse_traverse_node(list, list.begin());
}

void test_traverse_list()
{
    cout << "***test traverse list***" << endl;
    traverse_list(lst);
}