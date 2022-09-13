
void printMidElement(SinglyLinkedListNode *head)
{
  
  SinglyLinkedListNode *slow = head;
  SinglyLinkedListNode *fast = head;
  
  while(fast!= NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
    
  }
  
  cout<<slow->data<<endl;
  
  

}