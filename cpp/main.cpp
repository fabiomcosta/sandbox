#include <iostream>
#include "testable.h"

using namespace std;
using namespace ns;

int main(){
	Testable test(5);
	test.addDirection(10).addDirection(11);
	cout<< test.getDirection()<< " "<< test.testable();
}