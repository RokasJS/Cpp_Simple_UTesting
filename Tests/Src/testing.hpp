#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED

//--------------Variables--------------
// Group counter
extern int groupCounter;

//---------Function Prototypes---------
// Int to char* conversion
char * convertChar(int number, char *buff);   

//---------------Structs---------------
// Holds temporary test results
struct test_result {    
    bool res;
    const char * group;
    const char * exact;
  };

// Linked list node 
struct node {           
    test_result data;
    node *next;
};

//---------------Classes---------------
// Group class
class group {           
	public:
		node *head, *next;
		const char * groupName;
	  group(const char * t);
	  void appendTo(test_result value);
	  void report();
    void f_Test(bool eval, const char * exact);
};

class TestFramework { 
public:
    virtual void printOut(const char* n);
};
//----------------Macros----------------
// Spawns new group class instance 
#define NEW_GROUP(name)             \
group * name = new group(#name);        

// Test group body
#define TEST_G(name)                \
  bool test_##name(void);           \
  bool var_##name = test_##name();  \
  bool test_##name(void)            \
{ USING_GROUP(name)    

// Creates temporary pointer to class 
#define USING_GROUP(name)           \
  group * tmp = name;   

// Changes temporary pointer to class
#define CHANGE_GROUP(name)          \
  tmp = name;  

// Required for test group body
#define END return 0; } 

// Assertion macro, checks if condition is true 
#define TEST(check)                 \
  tmp->f_Test(check, #check);

// Reports group results
#define REPORT(name)                \
  name->report();

#endif