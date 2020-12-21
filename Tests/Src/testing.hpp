#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED
using namespace std;

// Int to char* conversion
char * convertChar(int number, char *buff);
extern int groupCounter;
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

// Group class
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

// Macros
#define NEW_GROUP(name)           \
group * name = new group(#name);  \


#define TEST_G(name)              \
  void test__##name(void)         \
{     group * tmp = name;         \

#define END }

#define TEST(check)               \
  tmp->f_Test(check, #check);

#define REPORT(name)  \
  name->report();

#endif