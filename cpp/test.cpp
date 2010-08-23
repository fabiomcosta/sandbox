#include "test.h"

ns::Test::Test(int dir) {
    setDirection(dir);
}

ns::Test ns::Test::setDirection(int dir){
    direction = dir;
}

ns::Test ns::Test::addDirection(int dir){
    direction += dir;
}

int ns::Test::getDirection(){
    return direction;
}

