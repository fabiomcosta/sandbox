#include <iostream>
#include "testable.h"

using namespace std;
using namespace ns;

int main(){
	Testable test(1);
	// test chaining
	test.addDirection(2).addDirection(3);
	
	Testable test1(4);
	
	// test operator overloading
	cout<< test + test1;
}