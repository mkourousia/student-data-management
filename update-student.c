// This function prints contents of linked list starting from head 
void updateCourses(student* node, int AM, int passed_courses) 
{ 
  while (node != NULL) 
  {  
    if( node->AM == AM) {

        node->passed_courses = passed_courses;
        printf("Passed courses Updated \n\n");

        return; 
    }
    node = node->next; 

  } 
  printf(" No student with AM = %d found \n\n", AM);
} 