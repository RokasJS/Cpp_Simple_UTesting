#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED
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

class group
{
	public:
		node *head, *next;
		char * groupName;
	  	group(char * t);
	  	void appendTo(test_result value);
	  	void report();
      void f_Test(bool eval, char * exact);
};

// Macro function for every individual test
void f_Test(bool chk, char * exact, group * groups);

#define NEW_GROUP(name) \
group * name = new group(#name); \


#define TEST_G(name) \
  void test__##name(void) \
{     group * tmp = name;                     \

#define END }

#define TEST(check)  \
  tmp->f_Test(check, #check);

#endif