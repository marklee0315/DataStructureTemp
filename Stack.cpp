/// <summary>
/// @auther:Mark
/// @create date:2021/01/31
/// @version:1.0
/// @latest change:2021/01/31
/// </summary>

#include "Stack.h"

Stack::Stack()
{
	count = 0;
}

ErrorCode Stack::push(const StackEntry& item) {
	ErrorCode outcome = success;
	if (count >= maxstack)
	{
		outcome = overflow;
	}
	else
	{
		entry[count++] = item;
	}
	return outcome;
}

ErrorCode Stack::pop()
{
	ErrorCode outcome = success;
	if (count == 0)
	{
		outcome == overflow;
	}
	else
	{
		--count;
	}
	return outcome;
}

ErrorCode Stack::getTop(StackEntry& item)const
{
	ErrorCode outcome = success;
	if (count == 0)
	{
		outcome = overflow;
	}
	else
	{
		item = entry[count - 1];
	}
	return outcome;
}

bool Stack::empty()const
{
	bool outcome = true;
	if (count > 0)
	{
		outcome = false;
	}
	return outcome;
}

//not implement

bool full(Stack& stack)
{
	return true;
}

ErrorCode popAndgetTop(Stack& stack, StackEntry& item)
{
	return success;
}

void clear(Stack& stack)
{

}

int size(Stack& stack)
{
	return 0;
}

void deleteAll(Stack& stack, StackEntry x)
{

}