/**
 *program to delete nth node from SLL from end
 *
 */



#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
	int data;
	struct st *next;
}SLL;

SLL *head_ptr=NULL;
int no_of_nodes;
void fill_list(int );
void delete_nth_node_from_last(int, int);
void print_list();

int main()
{
	int node_to_delete;
	printf("\nEnter number of nodes in the list:");
	scanf("%d",&no_of_nodes);
	printf("\nEnter node to delele from last list:");
	scanf("%d",&node_to_delete);

	fill_list(no_of_nodes);
	printf("\nBefore delete:");
	print_list();
	delete_nth_node_from_last(no_of_nodes,node_to_delete);
	printf("\nAfter delete :");
	print_list();

	printf("\n");

}

void fill_list(int n)
{
	int i;
	SLL *new_node;
	for(i=1; i <= n ;i++)
	{
		new_node= malloc(sizeof(SLL));
		new_node->data= i;
			new_node->next=head_ptr;
			head_ptr=new_node;

	}
}

void print_list()
{
	SLL*temp=head_ptr;
	if(temp==NULL)
	{
		printf("Linked List is empty\n");
		return;
	}
	printf("first node: %d total nodes present:%d \n",temp->data,no_of_nodes);
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void delete_nth_node_from_last(int count, int n)
{
	SLL *temp= head_ptr;
	if(count < n )
	{
		printf("\n\nNot enough node to delete: total nodes present are:%d\n",count);
		return;
	}
	else if(count == n)
	{
		head_ptr=head_ptr->next;
		temp->next=NULL;
		no_of_nodes--;
		free(temp);
	}
	else
	{
		int i;
		SLL *prev=head_ptr;
		for(i=0; i< (count-n) ; i++)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		temp->next=NULL;
		no_of_nodes--;
		free(temp);
	}
}
