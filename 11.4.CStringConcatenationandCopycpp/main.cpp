#include <iostream>
#include <cstring>  // have to add this library to play with std::strcat-std::strcpy

// References are 
// https://en.cppreference.com/w/cpp/header/cstring
// and freeCodeCamp.org

int main(){

    /*
    // First, we will consider concatenation
    // std::strcat command will be used to join strings

    char first[50] = "Hello ";  // You should be aware that the size is enough to concatenate
                                // and be sure that first variable is modifiable(not const). Because we change it
    char second[50] = "World!"; 

    std::strcat(first,second);
    std::cout << first << std::endl;
    std::strcat(first, " and Goodbye World!");
    std::cout << first << std::endl;
    */

    /*
    // More about concatenation
    std::cout << std::endl;
    
    char *first1 = new char[30] {'G','a','z','a','l','i','\0'}; // we make a variable in heap (because 'new')
    char *second1 = new char[30] {' ','i','s',' ','a',' ','b','i','g',' ','s','c','i','e','n','t','i','s','t','\0'};

    // Note
        // Describe what's going on first.
        // Second1 will be added to first1 and the process will start by overriding the null char in first1

    std::cout << "First sentence is : " << first1 << std::endl;
    std::cout << "Second sentence is : " << second1 << std::endl;

    std::cout << "Length of first sentence is : " << std::strlen(first1) << std::endl;
    std::cout << "Length of second sentence is : " << std::strlen(second1) << std::endl;

    std::strcat(first1,second1);
    std::cout << "The length of concatenation sentence is : " << std::strlen(first1) << std::endl;
    std::cout << "The concatenation sentence is : " << first1 << std::endl;
    */


    /*
    //Now we will concatenate a defined characters using std::strncap
    //signature => char *strncat(char *first2, char *second2, std::size_t number);
    char first2[50] {"Hello"};

    char second2[50] {" There is a world out there!"} ;

    std::cout << std::strncat(first2,second2,6) << std::endl;   //you can also make seperately as above then print
    */


    /*
    // Now, let's see copy. std::strcpy command will be used
    std::cout << std::endl;
    const char *first3 = "C++ is a multipurpose programming language.";
    char *second3 = new char[std::strlen(first3) + 1]; //+1 because std::strlen does not count null character above.
                                                        // contains garbage data
                                                        // not initialized
    
    std::strcpy(second3, first3);
    
    std::cout << "sizeof(second3) : " << sizeof(second3) << std::endl; 
    std::cout << "std::strlen(second3) : " << std::strlen(second3) << std::endl; 
    std::cout << "second3 : " << second3 << std::endl;   
    */



    // And the copying the number of characters we want => std::strncpy
    //signature => char *strncpy(char *first4, char *second4, std::size_t number);

    const char *first4 = {"Hello"};
    char second4[] = {'t','h','e','r','e','a','n','d','\0'};  // Have to put terminating character('\0') if you print.
    char third4[20] = {"Welcome"};

    std::cout << "second4 : " << second4 << std::endl;

    std::strncpy(second4, first4, 5);

    std::cout << "second4 : " << second4 << std::endl;

    std::strcat(second4,third4);    // lets add concatenation

    std::cout << "second4 : " << second4 << std::endl;


    return 0;
}