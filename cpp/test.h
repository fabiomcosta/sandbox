#ifndef NS_TEST_H_
#define NS_TEST_H_

namespace ns {
	class Test{
	public:
		Test(int);
		Test& setDirection(int);
		Test& addDirection(int);
		int getDirection();
	protected:
		int direction;
	};
}

#endif