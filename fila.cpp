#include "Fila.h"

StaticQueue Create()
{
	StaticQueue queue =
	{
		0,
		0,
		0,
		{ 0 }
	};
	return queue;
}

bool InsertBack(StaticQueue& queue, char elem)
{
	if (queue.count == Size(queue))
	{
		return false;
	}
	queue.values[queue.rear] = elem;
	queue.rear = (queue.rear + 1) % Size(queue);
	++queue.count;
	return true;
}

bool InsertFront(StaticQueue& queue, char elem)
{
	if (queue.count == Size(queue))
	{
		return false;
	}
	queue.front = (queue.front - 1) % Size(queue);
	if (queue.front < 0) {
		queue.front = 7;
	}
	queue.values[queue.front] = elem;
	++queue.count;
	return true;
}

char RemoveFront(StaticQueue& queue)
{
	if (IsEmpty(queue))
	{
		return '\0';
	}
	char value = queue.values[queue.front];
	queue.values[queue.front] = '\0';
	queue.front = (queue.front + 1) % Size(queue);
	--queue.count;
	return value;
}

char RemoveBack(StaticQueue& queue)
{
	if (IsEmpty(queue))
	{
		return '\0';
	}
	queue.rear = (queue.rear - 1) % Size(queue);
	if (queue.rear < 0) {
		queue.rear = 7;
	}
	char value = queue.values[queue.rear];
	queue.values[queue.rear] = '\0';
	--queue.count;

	return value;
}
char Front(const StaticQueue& queue)
{
	return IsEmpty(queue) ? '\0' : queue.values[queue.front];
}

char Back(StaticQueue& queue)
{
	if (IsEmpty(queue))
	{
		return '\0';
	}
	queue.rear = (queue.rear - 1) % Size(queue);
	if (queue.rear < 0) {
		queue.rear = 7;
	}
	char value = queue.values[queue.rear];
	queue.rear = (queue.rear + 1) % Size(queue);
	return value;
}

int Size(const StaticQueue& queue)
{
	return sizeof(queue.values) / sizeof(queue.values[0]);
}

int Count(const StaticQueue& queue)
{
	return queue.count;
}

bool IsEmpty(const StaticQueue& queue)
{
	return queue.count == 0;
}

bool Clear(StaticQueue& queue)
{
	while (!IsEmpty(queue))
	{
		RemoveFront(queue);
	}
	return IsEmpty(queue);
}

