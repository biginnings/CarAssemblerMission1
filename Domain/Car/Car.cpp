#include "Break.cpp"

class Car {
private:
	int type;
	int engine;
	int break_system;
	int steering_system;

	Break* breakk;

public:

	virtual void select(int num) = 0;
};