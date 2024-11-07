#include <iostream>

#include "cqueue.h"
#include "recursiveSearch.h"

using namespace std;

// Default Constructor
template<typename T>
cQ::cQueue<T>::cQueue() {
	elements = new T[10];
	rearIndex = -1;
	frontIndex = 0;
	numItems = 0;
	capacity = 10;

}

// Destructor
template<typename T>
cQ::cQueue<T>::~cQueue() {
	delete[] elements;
}

// Push
template<typename T>
void cQ::cQueue<T>::push(const T& item) {
	if (numItems == capacity) {
		reallocate();
	}
	numItems++;
	rearIndex = (rearIndex + 1) % capacity;
	elements[rearIndex] = item;
}

	
// Pop
template<typename T>
void cQ::cQueue<T>::pop() {
	frontIndex = (frontIndex + 1) % capacity;
	numItems--;
}

// Front
template<typename T>
T cQ::cQueue<T>::front() {
	return elements[frontIndex];
}

// Rear
template <typename T >
T cQ::cQueue<T>::rear() {
	return elements[rearIndex];
}

// Size
template<typename T>
int cQ::cQueue<T>::size() {
	return numItems;
}

// Empty
template<typename T>
bool cQ::cQueue<T>::empty() {
	if (numItems == 0) {
		return true;
	}
	return false;
}

// Show
template<typename T>
void cQ::cQueue<T>::show() {
	int i = frontIndex;
	for (int j = 0; j < size(); j++) {
		cout << elements[i % capacity] << " ";
		i++;
	}
	cout << endl;
}

// to rear
template<typename T>
void cQ::cQueue<T>::toRear() {
	T temp = front();
	pop();
	push(temp);
}

// Reallocate (for insertion sort)
template<typename T>
void cQ::cQueue<T>::reallocate() {
	// Create a new larger array
	int newCapacity = capacity * 2;
	T* newElements = new T[newCapacity];

	// Copy existing elements into new array
	for (int i = 0; i < numItems; i++) {
		newElements[i] = elements[(frontIndex + i) % capacity];
	}

	// Delete old array and update pointers
	delete[] elements;
	elements = newElements;
	frontIndex = 0;
	rearIndex = numItems - 1;
	capacity = newCapacity;
}

// Insertion Sort
template<typename T>
void cQ::cQueue<T>::insSort() {
	for (int i = 1; i < numItems; ++i) {
		T currentElement = elements[(frontIndex + i) % capacity];
		int j = i - 1;

		// Shift elements of the sorted part of the queue that are greater than currentElement
		// to the right by one position
		while (j >= 0 && elements[(frontIndex + j) % capacity] > currentElement) {
			elements[(frontIndex + j + 1) % capacity] = elements[(frontIndex + j) % capacity];
			j--;
		}

		// Insert the current element at the correct position
		elements[(frontIndex + j + 1) % capacity] = currentElement;
	}
}

// Prints curent queue with current capcity, size, front, rear, etc.
template<typename T>
void cQ::cQueue<T>::status() {
	cout << "---------------------------------" << endl;
	cout << "Current Queue:	"; show();
	cout << "Queue Size:	" << size() << endl;
	cout << "Current Front:	" << front() << endl;
	cout << "Current Rear:	" << rear() << endl;
}
template class cQ::cQueue<int>;
template class cQ::cQueue<string>;