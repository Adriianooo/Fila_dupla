#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__

const int STATIC_QUEUE_CAPACITY = 8;

struct StaticQueue
{
	int front;
	int rear;
	int count;

	char values[STATIC_QUEUE_CAPACITY];
};

StaticQueue Create();

bool InsertBack(StaticQueue& queue, char elem);

bool InsertFront(StaticQueue& queue, char elem);

char RemoveFront(StaticQueue& queue);

char RemoveBack(StaticQueue& queue);

char Front(const StaticQueue& queue);

char Back(StaticQueue& queue);

int Size(const StaticQueue& queue);

int Count(const StaticQueue& queue);

bool IsEmpty(const StaticQueue& queue);

bool Clear(StaticQueue& queue);

#endif 