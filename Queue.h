/// <summary>
/// @auther:Mark
/// @create_date:2021/01/31
/// @version:1.0
/// @latest_change:2021/01/31
/// </summary>

#pragma once
#include"Utility.h"

const int maxqueue = 10;

typedef double QueueEntry;

class Queue
{
public:
	Queue();
	ErrorCode server();
	ErrorCode append(const QueueEntry& item);
	ErrorCode retrieve(QueueEntry& item)const;
	bool empty()const;

protected:
	int count;
	int front, rear;
	QueueEntry entry[maxqueue];
};

class ExtendedQueue : public Queue
{
public:
	bool full() const;
	int size() const;
	void clear();
	ErrorCode serveAndRetrieve(QueueEntry& item);
};

