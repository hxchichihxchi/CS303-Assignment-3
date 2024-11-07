// CS303 Assignment 3 - Duy Lam
#include <iostream>
#include <vector>
#include <random>

#include "cqueue.h"
#include "cqueue.cpp"

using namespace std;
cQ::cQueue<int> queue;

int main() {
	// PART 1 //
	cout << "!!! - CS303 Assignment 3 - Duy Lam - !!!" << endl;
	cout << "///---------- PART 1 ----------///" << endl;

	// Pushing 10 items (random integer values 1-100) into queue
	cout << "Created a queue with 10 elements..." << endl;

	queue.push(rand()%100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);
	queue.push(rand() % 100);

	// Shows the current queue with current capacity, front, rear.
	queue.status();
	
	// Pops/Removes the front element
	cout << endl << "Popping Front Element" << endl;
	queue.pop();
	queue.status();

	// Moving front element to rear
	cout << endl << "Moving Front Element to Rear" << endl;
	queue.toRear();
	queue.status();

	// Pushes a specific integer and "shifting" within queue.
	cout << endl <<"Adding 818 to queue, then moving front to rear three times" << endl;
	queue.push(818);
	queue.toRear();
	queue.toRear();
	queue.toRear();
	queue.status();

	// PART 2  (Technically part 3 but it makes more sense to put it after 1 since it still deals with a queue.) //
	cout << endl << "///---------- PART 2 ----------///" << endl;
	cout << endl << "Sorting the Queue" << endl;
	queue.insSort();
	queue.status();
	cout << "Emptiness:	" << queue.empty() << endl;

	// Popping all elements to show empty function.
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();

	cout << endl << "Popping All Elements in the Queue" << endl;
	cout << "---------------------------------" << endl;
	cout << "Current Queue:	"; queue.show();
	cout << "Queue Size:	" << queue.size() << endl;
	cout << "Emptiness:	" << queue.empty() << endl;

	// PART 3 (Technically part 2 but refer to part 2 statement) //
	// Performing a linear search for a predetermined vector
	vector<int> nums = { 10, 20, 30, 40, 30, 818, 30 };
	int target = 30;	// Target Number

	
	cout << endl << "///---------- PART 3 ----------///" << endl;
	cout << "Given a vector: ";
	// Prints the vector
	for (int elem : nums) {
		cout << elem << " ";
	}
	cout << endl;
	cout << "Target Value:	" << target << endl;
	// Perform the linear search on vector recursively
	int index = linSearch(nums, target, nums.size());
	if (index != -1) {
		cout << "Last Occurence at Index: " << index << endl;
	}
	else {
		cout << target << " not found!" << endl;
	}

	

	return 0;
}