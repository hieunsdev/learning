#include <iostream>
#include <stdbool.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool has_cycle(Node *head)
{

    if (head->next == nullptr || head == nullptr)
    {
        return false;
    }

    Node *slow = head->next;
    Node *fast = head;

    while (slow != nullptr && fast->next != nullptr && fast != nullptr)
    {
        if (slow == fast)
        {
            return true;
        }
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return false;
}

int main()
{
    return 0;
}
