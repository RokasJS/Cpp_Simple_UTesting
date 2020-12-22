#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED

//---------Function Prototypes---------
// Int to char* conversion
char * convertChar(int number, char *buff);   
void report_all();
//---------------Structs---------------
// Hold temporary test results
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
    static int groupCounter; 
		node *head, *next;
		const char * groupName;
	  group(const char * t);
	  void appendTo(test_result value);
	  void report();
    void f_Test(bool eval, const char * exact);
};

// Allow for outside char * output functions
class TestFramework { 
public:
    virtual void printOut(const char* n);
};

//----------------Macros----------------
// Spawn new group class instance 
#define NEW_GROUP(name)             \
group * name = new group(#name);        

// Test group body
#define TEST_G(name)                \
  bool test_##name(void);           \
  bool var_##name = test_##name();  \
  bool test_##name(void)            \
{ USING_GROUP(name)    

// Create temporary pointer to class 
#define USING_GROUP(name)           \
  group * tmp = name;   

// Change temporary pointer to class
#define CHANGE_GROUP(name)          \
  tmp = name;  

// Required for test group body
#define END return 0; } 

// Check if condition is true 
#define TEST(check)                 \
  tmp->f_Test(check, #check);

// Report group results
#define REPORT(name)                \
  name->report();

// Report all results
#define REPORT_ALL                  \
  report_all();

#endif