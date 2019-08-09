#pragma once
#ifndef ADDER_USE
#define ADDER_USE
class Adder {
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

#endif // !ADDER_USE