// Leetcode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include "person.h"
#include <vector>
#include "math.h"
using namespace std;

struct compare {
	bool operator()(Person &a, Person &b) {
		return a.getAge() > b.getAge();
	}
};

int main()
{
	priority_queue<Person, vector<Person>, compare> heap;

	for (int i = 0; i < 10; i++) {
		heap.push(Person("Hello"+to_string(i),rand()));
	}

	while (!heap.empty()) {
		cout << heap.top() << endl;
		heap.pop();
	}
	return 0;
}

 