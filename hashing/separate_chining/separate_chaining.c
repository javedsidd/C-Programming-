// hashing -----> separate chaining method

#include <stdio.h>
#include <string.h>
#define HASH_TABLE_SIZE 10
#define MAX_STR_SIZE 30


typedef struct node
{
	int empid;
	char name[MAX_STR_SIZE];
	char designation[MAX_STR_SIZE];
	struct node *next;
}Node;



int hash_the_employee(int);

void add_to_list(Node *);
void diplay_based_on_index(Node *);
void display_all(Node*);

void search(int empId);

int get_oneLine_string(char*);



int main()
{
	Node *hashTable[HASH_TABLE_SIZE];
	Node temp;	
	int nameLen, desigLen;
	
	printf("Enter the Employee information:\n");
	
	printf("Employee id:\t\n");
	scanf(" %d",&temp.empid);	
	
	printf("Name:\n");
	scanf(" %[^\n]s",temp.name);	
	
	printf("designation:\n");
	scanf(" %[^\n]s",temp.designation);	
	
	printf("\nYou entered Employee information as:\n");
	printf("Employee id: %d\n",temp.empid);
	printf("name:  %s\tlength=%d\n",temp.name,nameLen);
	printf("Designation:  %s\t length=%d\n",temp.designation,desigLen);
	
	hash_the_employee(temp.empid);
return 0;
}

/*
int get_oneLine_string(char *temp)
{
	char ch='\0';
	int i=0;
	do
	{	
		printf("Enter a char:\n");
		ch=getchar();	
		printf("You entered: %c ",ch);
		//if(ch=='\n')
		//continue;
		temp[i]=ch;
		i++;
	}while(ch!='\n');
	
	temp[i]='\0';
		
	if( i> MAX_STR_SIZE)	
	{
			printf("You exceeded the maximum string size limit!!\n");
			strcpy(temp,"NULL");
			return 0;
	}
	int len=i-1;
return len;
}
*/
int hash_the_employee(int empid)
{
	return (empid)%11;
}
