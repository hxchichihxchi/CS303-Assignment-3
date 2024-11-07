# CS303-Assignment-3

## Running the Program
1) Download and open the code in an IDE.
2) Run the program. All tasks of the assignment should be done automatically.

When running the "program", all of the tasks required by the assignment will be done and shown in the terminal. This means that there is no user-interaction aside from scrolling and will "close" automaticaally. The main goal of this document is to be brief and explain what each part and segment of the output does/means.

## Part 1 - Queue Operations (Q1)
The first segment of the program creates a queue by pushing 10 random integers and outputs it as shown.

<img width="332" alt="image" src="https://github.com/user-attachments/assets/c83b441c-e283-4988-9a58-1f10dcba71b0">

It will also output some attributes about the queue:
- Queue Size
- Current Front (The current first element in the queue)
- Current Rear (The current last element in the queue)

The following segment would pop the front; removing the first element from the queue. With this action and most following actions, the accompanying attributes of the queue and their output would update accordingly.

<img width="299" alt="image" src="https://github.com/user-attachments/assets/dceebbb7-adc1-4699-84d8-e8f837d341a1">


The next segment demonstrates moving the front element to the rear end of the queue.

<img width="320" alt="image" src="https://github.com/user-attachments/assets/287591ab-25e5-4c46-9ba4-052ab0ebd207">

Then in the next segment, the program pushes an integer (in this case is 818) and moves the front element to the rear three times. Effectively creating a sort of "shifting" effect.

<img width="421" alt="image" src="https://github.com/user-attachments/assets/021d0358-2f1c-47e1-bbe8-551f27b14fd8">

## Part 2 - Sorting the Queue and Checking for Emptiness (Q3)
Technically this should have been the last part of the program, but it would be more topic convenient to be after P1/Q1 since P3/Q2 would handle vectors.

The first segment of this part would take the current queue and sort it into ascending order. The output will be similar to the last part, however the program should also give details about "Emptiness".
The value is 0 because the queue is currently not empty as there is still obviously several elemenets in it. 0 should be treated as "False."

<img width="329" alt="image" src="https://github.com/user-attachments/assets/aaa4fd1c-4801-4472-8815-dd44b8f1a3b4">

The next segment would remove all elements by popping it all from the queue; leaving an empty queue. The "Emptiness" attribute is now "1" since there is no longer any elements in the queue as shown:

<img width="251" alt="image" src="https://github.com/user-attachments/assets/789049e6-f89c-49d6-b018-f97ff774e294">

Attributes "Current Front" and "Current Rear" of the queue are not shown since they couldn't be updated with new elements. Since there does not exist anymore elemenets for the program to search for, the program defaulted it to the last known values. So they were left out in this segment as they would be "misleading."

## Part 3 - Last Occurences in a Vector (Q2)
The last part and final "segment" of this program shows a predetermined vector with a set numbers, the integer the program is trying to "target", and index position of said integer's last occurence/appearance in the vector.

<img width="269" alt="image" src="https://github.com/user-attachments/assets/f439e8b7-bc5a-4913-94ba-e610701649b9">

The program should have concluded and "closed" after this segment.
