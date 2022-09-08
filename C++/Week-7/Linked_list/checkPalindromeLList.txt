
  
SinglyLinkedListNode *reverseLList(SinglyLinkedListNode *head)
{
    
    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *curr = head;
    
    SinglyLinkedListNode *forward  = head;
    
    
    while(forward != NULL){
      
        forward = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr=forward;
    }
    
    return prev;

}


bool palindromeLlist(SinglyLinkedListNode *head)
{
  
  if(head == NULL){
    return true;
  }
  
  vector<int> vec;
  
  
  SinglyLinkedListNode* ptr = head;
  
  while(ptr != NULL){
    vec.push_back(ptr->data);
    ptr = ptr->next;
  }
  
  
  
  
  
  SinglyLinkedListNode* curr = reverseLList(head);
    
    
    
    int i=0;
    
    while(curr != NULL){
    
    
    if(curr->data == vec[i++]){
      curr = curr->next;
    }
    
    else{
      return false;
    }
      
  }
    
    
    return true;
 

}