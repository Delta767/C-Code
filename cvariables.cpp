//cvariables.cpp
#include <iostream>
using namespace std;
 
 int main(){
	 //Initialize variables
	 int i; //-integers
	 double d; //-floating point numbers
	 float f; //-floating point number that is smaller than double
	 char c; //-stores single characters 'c'
	 string s; //stores text, "hello world"
	 bool done; //true or false
	 //Assign data to each variable
	 i = 65521;
	 d = 3.141592653589
	 f = 2.718281828459045
	 c = 'A';
	 s = "This is a srting of characters.";
	 done = true;
	 //Print the variable's data
	 cout << i << "\n";
	 cout << d << "\n";
	 cout << f << "\n";
	 cout << c << "\n";
	 cout << s << "\n";
	 cout << done << "\n";
	 done = false;
	 cout << done << "\n";
	 return 0;
}
