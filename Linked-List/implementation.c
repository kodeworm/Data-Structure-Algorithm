#include<stdio.h>
#include<stdlib.h>


typedef struct node{    //linked list node
    int data;
    struct node *next;
}*NODE;
NODE start=NULL;


NODE create(){         //creation of linked list 
    NODE newnode;
    int n;
    printf("\n\n__Enter -1 to exit__\n");
    
   
    do{
        printf("Enter element= ");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=n;
        if(start==NULL){
            start=newnode;
            newnode->next=NULL;
        }
        else{
            newnode->next=start;
            start=newnode;
        }
        
    }while(n!=-1);
    
}

void display(){           //printing the linked list
      
    NODE temp;
    temp=start;
    printf("\nDisplaying \n");

    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
   
}

void search(){            //search algorithm for a linked list
    int element,i=0,flag;
    NODE p;
    p=start;
    if(p==NULL){
        printf("\nList is empty\n");
    }
    else{
        printf("Enter the element you want to search: ");
        scanf("%d",&element);
        while(p!=NULL){
            if(element==p->data){
                printf("Item found at %d node",i+1);
                flag=0;
                return;
            }
            else{
                flag=1;
            }
            i++;
            p=p->next;
        }
        if(flag==1){
            printf("Element not found");
        }
    }

}

void insertatend(){               //algorithm for insertion of element at the end of the linked list
   
    int val;
    printf("Enter the element: ");
    scanf("%d",&val);
    NODE newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next= NULL;
   
    if(start == NULL)
        start = newNode;
    else
    {
        NODE lastNode = start;
        
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
         lastNode->next = newNode;
    

    printf("\nUpdated linked list:\n");
    display();

}
}

void insertatfront(){               //algorithm for insertion of element at the beginning

    int val;
    printf("Enter the element: ");
    scanf("%d",&val);
    NODE newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next= NULL;
    if(start==NULL){
        start=newNode;
    }
    else{ 
        newNode->next=start;
        start=newNode;
    }
    printf("\nUpdated linked list:\n");
    display();

}


void deletedata(){                  //deletion of an element in the linked list

    NODE temp;
    int element;
    printf("Enter the element to delete: ");
    scanf("%d",&element);
     
      if(start->data== element)
      {
          temp = start;    
          start = (start)->next;
          free(temp);
      }
    else
      {
          NODE current  = start;
          while(current->next != NULL)
          {
              if(current->next->data == element)
              {
                  temp = current->next;
                  
                  current->next = current->next->next;
                  free(temp);
                  break;
              }
              else
                  current = current->next;
          }

     
    printf("\nUpdated linked list:\n");
    display();
}
}

void deletenode(){                      //deletion of a node in a linked list
    NODE temp = start; 
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
                              
    int i;
    if (pos == 0) {
        printf("\nElement deleted is : %d\n", temp->data);
        start = start->next; 
        temp->next = NULL;
        free(temp); 
    }
    else {
        for (i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        
        NODE del
            = temp->next; 
        temp->next = temp->next->next;
        del->next = NULL;
        free(del); 
    }
    printf("\nUpdated linked list:\n");
    display();
}

int main()
{
    NODE start=(struct node*)malloc(sizeof(struct node));
    int flag=1;
    int choice;
    while(flag==1){
    printf("\nOperations on single linked list\n");
    printf("Press 0: To exit\nPress 1: Create\nPress 2: Display\nPress 3: Search\nPress 4: Insert data at the end\nPress 5: Insert after at front\nPress 6: Delete any given data\nPress 7: Delete any given node number\n\n*/");
    printf("***************************\nEnter Choice: ");
    scanf("%d",&choice);
    if(choice==0){
        flag==0;
        break;
    }
    
    switch (choice)
    {   
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        search();
        break;
    case 4:
        insertatend();
        break;
    case 5:
        insertatfront();
        break;
    case 6:
        deletedata();
        break;    
    case 7:
        deletenode();
        break;

    default:
        printf("Please enter a valid input");
    }

    }    
}
