#include <iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
};

bool hasCycle(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return false;
    }
    ListNode *fast = head->next;
    ListNode *slow = head;
    
    while (fast != nullptr && fast->next != nullptr && slow != nullptr)
    {
        if (fast == slow)
        {
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }

    return false;
}

int main()
{

    return 0;
}