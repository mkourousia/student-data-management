/* Given a reference (pointer to pointer) to the head 
   of a list and an int, appends a new node at the end  */
void append(student** head_ref, char *new_data) 
{ 

    /* 1. allocate node */
    student* new_node = (student*) malloc(sizeof(student)); 
  
    student *last = *head_ref;  /* used in step 5*/

    /* 2. put in the data  */
    strcpy(new_node->name, new_data); 
    new_node->passed_courses = 0;
  
    /* 3. This new node is going to be the last node, so make next  
          of it as NULL*/
    new_node->next = NULL; 
  
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    }   
       
    /* 5. Else traverse till the last node */
    while (last->next != NULL) 
        last = last->next; 

    /* Assign AM value incrementally*/
    new_node->AM = last->AM + 1;
    /* 6. Change the next of last node */
    last->next = new_node; 
    return;     
} 
