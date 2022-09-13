
void  AddOne(vector<int> &vec){   // reverseed vector


  reverse(vec.begin() , vec.end());  // 2
  
    
    int carry = 1;
    
    int i=0;
    
    while(i<vec.size()){
      
        int ans = carry + vec[i];
        
        vec[i] = ans % 10;
        
        carry = ans /10;
        
        
        
        
        i++;
        
        
    
        
        
    }
    
    if(carry > 0){
      vec.push_back(carry);
      
      
      
    }
    
    
    reverse(vec.begin() , vec.end());
    
  
}

SinglyLinkedListNode *addOneToList(SinglyLinkedListNode *head)
{
  
  vector<int> vec;
  
  SinglyLinkedListNode *ptr = head;
  
  
  while(ptr != NULL){
  
    vec.push_back(ptr->data);  
    
    ptr = ptr->next;
  }                       // 1
  
  
  
  
  
  
  AddOne(vec);  // 
  
  for(int i=0;i<vec.size() ; i++){
   
  }
  
  
  
  
  SinglyLinkedListNode *tail = head;
  SinglyLinkedListNode *temp = head;
  
  
  int i=0;
  
  
  while(temp != NULL){
    
    
    if(temp->data != vec[i]){
      
      temp->data = vec[i];
      
      
    }
    
    
    temp = temp->next;
    i++;
    
    
    
    if(tail->next != NULL){
      tail = tail->next;
    }
    
  }
  
  
  if( i < vec.size() ){
      
      tail->next = new SinglyLinkedListNode(vec[i]);
  
  }
  
  
  return head;
  
}