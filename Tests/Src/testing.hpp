#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED
#include <iostream>
using namespace std;
// Struct for holding test results
struct test_result {
    bool res;
    char * group;
    char * name;
    char * exact;
  };

// Linked list node class
struct node {
    test_result data;
    node *next;
};

// class list
// {
// 		private:
// 	  	node *head, *tail;
// 		public:
// 	  	list();
// 	  	void createnode(test_result value);
// 	  	void display();
// };

class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void createnode(test_result value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
      
			if(head==NULL)
			{
        
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
        
				tail->next=temp;
				tail=temp;
			}
		}
		void display()
		{
			node *temp=new node;
			temp=head;
      
			while(temp!=NULL)
			{
				cout<<temp->data.exact<<"\n";
				temp=temp->next;
			}
		}
};
// Macro function for every individual test
void f_Test(bool chk, char * exact, list * groups);

#define NEW_GROUP(name) \
list group_##name;\
list * point_##name = &group_##name; 

#define TEST_G(name) \
  void test__##name(void) \
{                         \

#define END }

#define TEST(check, group)  \
  f_Test(check, #check, group);


// Function for appending to linked list
//void addToList(res_list** head_ref, test_result data);

// Function for reporting all test results
//void ReportTests(res_list * group);

#endif