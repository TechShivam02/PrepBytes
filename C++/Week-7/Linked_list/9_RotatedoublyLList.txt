
SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head,int k)
{
  int count=1;
  
  SinglyLinkedListNode *ptr = head;
  SinglyLinkedListNode *tail = head;
  
  
  while(tail->next != NULL){
    
    if(count < k){
      
      ptr = ptr->next;
      count++;
    }
    
    
    tail = tail ->next;
    
  }

  
  tail->next = head;
  head->prev = tail;
  
  
  head = ptr->next;
  
  ptr->next = NULL;
  head->prev = NULL;
  
  return head;
  
    
}