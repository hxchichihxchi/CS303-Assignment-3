#ifndef CQUEUE_H
#define CQUEUE_H

#include <iostream>


using namespace std;

namespace cQ {
	template<typename T>
	class cQueue {
	private:
		// Variables
		int capacity;
		int numItems;
		int frontIndex;
		int rearIndex;
		T* elements;

	public:
		cQueue();		// Constructor
		~cQueue();		// Destructor

		// Methods
		void push(const T& item);	// Pushes front of queue
		void pop();					// Pop front of queue
		T front();					// Front of queue
		T rear();
		int size();					// Size of queue
		bool empty();				// Checks if queue is empty
		void show();				// Shows queue

		void toRear();				// Moves front element to reer
		void insSort();				// Insertion Sort

		void status();				// Prints out queue and details

		// Part of insertion sort
		void reallocate();			// Needed for insertion sort

		
	};
}
#endif
