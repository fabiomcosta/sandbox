#include <iostream>
#include "testable.h"

ns::Testable::Testable(int i) : ns::Test::Test(i){
	
}

bool ns::Testable::testable(){
	return true;
}

ns::Testable& ns::Testable::addDirection(int dir){
	return (Testable&)Test::addDirection(dir);
}