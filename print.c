// This function prints contents of linked list starting from head 
void printList(student* node) 
{ 
  printf("AM\t Name\t\t Passed Courses\n");
  while (node != NULL) 
  {  
     printf(" %d\t", node->AM);
     printf(" %s\t\t", node->name); 
     printf(" %d \n", node->passed_courses); 
     node = node->next; 
  } 
} 


// This function prints contents of linked list starting from head 
void printStudent(student* node, int AM) 
{ 
  printf("AM\t Name\t\t Passed Courses\n");
  while (node != NULL) 
  {  
     if( node->AM == AM) {
        printf(" %d\t", node->AM);
        printf(" %s\t\t", node->name); 
        printf(" %d \n", node->passed_courses);

        return; 
     }

     node = node->next; 
  } 
  printf(" No student with AM = %d found \n", AM);
} 