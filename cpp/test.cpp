#include <iostream>
#include "test.h"

ns::Test::Test(int dir) {
	setDirection(dir);
}

ns::Test& ns::Test::setDirection(int dir){
	direction = dir;
	return *this;
}

ns::Test& ns::Test::addDirection(int dir){
	direction += dir;
	return *this;
}

int ns::Test::getDirection(){
	return direction;
}

