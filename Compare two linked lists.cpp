/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    while(1)
    {
        if(headA == NULL && headB == NULL) return 1;
        else if(headA == NULL && headB != NULL) return 0;
        else if(headA->data != headB->data) return 0;

        headA = headA->next;
        headB = headB->next;
    }
    return 1;
}

