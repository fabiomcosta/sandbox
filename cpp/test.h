#ifndef NS_TEST_H_
#define NS_TEST_H_

namespace ns {
	class Test{
	public:
		Test(int);
		Test& setDirection(int);
		Test& addDirection(int);
		int getDirection();
		
		int operator+(ns::Test& test){
			return direction + test.getDirection();
		}
		
	protected:
		int direction;
	};
}

#endif