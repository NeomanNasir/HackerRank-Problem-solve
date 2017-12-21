/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *prev   = NULL;
    Node *current = head;
    Node *temp;
    while (current != NULL) {
        temp = current -> next;
        current -> next = prev;
        prev = current;
        current = temp;
    }
    head = prev;
    return head;
}
