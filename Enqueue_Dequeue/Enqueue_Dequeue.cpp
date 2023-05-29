// Enqueue_Dequeue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr auto MAX_SIZE = 100;;

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
	if (front == -1)
		return true;
	else
		return false;
}

bool isFull() {
	if (front == 0 && rear == MAX_SIZE - 1) {
		return true;
	}
	return false;
}

void enqueue(int value)
{
	
}
void dequeue() {}

int peek() {}



void displayQueue() {}

int main()
{}
 



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
