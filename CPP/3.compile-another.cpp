// A C++ program that compiles and runs another C++ 
// program
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
    char filename[100];
    cout << "Enter file name only to compile: ";
    cin.getline(filename, 100);
    
    // Build command to execute.  For example if the input
    // file name is a.cpp, then str holds "gcc -o a.out a.cpp" 
    // Here -o is used to specify executable file name
    
    string str = "g++ ";
     str = str + filename + ".cpp -o p.exe";
  
    // Convert string to const char * as system requires
    // parameter of type const char *
    const char *command = str.c_str();
  
    cout << "Compiling file using " << command << endl;
    system(command);
    system(".\\p.exe");
    return 0;
}