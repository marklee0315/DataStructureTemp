/// <summary>
/// @auther:Mark
/// @create_date:2021/01/31
/// @version:1.0
/// @latest_change:2021/01/31
/// </summary>

#include "Queue.h"

Queue::Queue()
{
	count = 0;
	rear = maxqueue - 1;
	front = 0;
}

ErrorCode Queue::server()
{
	if (count < -0)
	{
		return underflow;
	}
	count--;
	front = ((front + 1) == maxqueue) ? 0 : (front + 1);
	return success;
}

ErrorCode Queue::append(const QueueEntry& item)
{
	if (count >= maxqueue)
	{
		return overflow;
	}
	count++;
	rear = ((rear + 1) == maxqueue) ? 0 : (rear + 1);
	entry[rear] = item;
	return success;
}


ErrorCode Queue::retrieve(QueueEntry& item)const
{
	if (count < -0)
	{
		return underflow;
	}
	item = entry[front];
	return success;
}

bool Queue::empty()const
{
	return count == 0;
}

int ExtendedQueue::size()const
{
	return count;
}

bool ExtendedQueue::full()const
{
	return true;
}

void ExtendedQueue::clear()
{
	//not implementation
}

ErrorCode ExtendedQueue::serveAndRetrieve(QueueEntry& item)
{
	return success;
}