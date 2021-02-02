/// <summary>
/// @auther:Mark
/// @create_date:2021/01/31
/// @version:1.0
/// @latest_change:2021/01/31
/// </summary>

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main()
{
	Stack mystack;
	double receiver;
	mystack.push(6);
	cout << mystack.getTop(receiver);
}