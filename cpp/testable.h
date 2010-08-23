#include "test.h"

#ifndef NS_TESTABLE_H_
#define NS_TESTABLE_H_

namespace ns {
    class Testable: public Test{
    public:
        Testable(int);
        Testable addDirection(int);
        bool testable();
    };
}

#endif