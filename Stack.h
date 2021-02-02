/// <summary>
/// @auther:Mark
/// @create_date:2021/01/31
/// @version:1.0
/// @latest_change:2021/01/31
/// </summary>

#pragma once
#include"Utility.h"

const int maxstack = 10;

typedef double StackEntry;

class Stack
{
public:
	Stack();
	ErrorCode pop();
	ErrorCode push(const StackEntry& item);
	ErrorCode getTop(StackEntry& item)const;
	bool empty()const;

	//functions not implement
	bool full(Stack& stack);
	ErrorCode popAndgetTop(Stack& stack, StackEntry& item);
	void clear(Stack& stack);
	int size(Stack& stack);
	void deleteAll(Stack& stack, StackEntry x);

private:
	int count;
	StackEntry entry[maxstack];
};