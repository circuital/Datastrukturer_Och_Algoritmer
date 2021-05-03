
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream> 
#include <string>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

//3
//class Patient
//{
//	string name;
//	time_t startTime = time(NULL);
//
//public:
//	Patient(string name)
//	{
//		this->name = name;
//	}
//	string GetName()
//	{
//		return this->name;
//	}
//	time_t GetStartTime()
//	{
//		return this->startTime;
//	}
//};
//
//void AddPatient(queue<Patient>& patientQueue, string name)
//{
//	Patient newPatient = Patient(name);
//	patientQueue.push(newPatient);
//}
//
//Patient GetNextPatient(queue<Patient>& patientQueue)
//{
//	Patient nextPatient = patientQueue.front();
//	return nextPatient;
//}
//
//int main()
//{
//	queue<Patient> patientQueue;
//	while (true)
//	{
//		int selection;
//		cout << "1. Add patient.\n2. Get next patient.\nEnter menu selection: ";
//		cin >> selection;
//		if (selection == 1)
//		{
//			string name;
//			cout << "Enter the patients name: ";
//			cin >> name;
//			AddPatient(patientQueue, name);
//		}
//		else if (selection == 2)
//		{
//			if (patientQueue.size() > 0)
//			{
//				time_t endTime = time(NULL);
//				cout << "Next patient is " << GetNextPatient(patientQueue).GetName() << ", waiting time: " << endTime - GetNextPatient(patientQueue).GetStartTime() << " sec." << endl;
//				patientQueue.pop();
//			}
//			else
//			{
//				cout << "No patients waiting." << endl;
//			}
//		}
//	}
//}

//4
//class StringQueue
//{
//	vector<string> strings;
//
//public:
//	void Push(string s)
//	{
//		strings.push_back(s);
//	}
//
//	void Pop()
//	{
//		strings.erase(strings.begin());
//	}
//
//	void Empty()
//	{
//		strings.clear();
//	}
//
//	string Top()
//	{
//		return strings.front();
//	}
//};
//
//int main()
//{
//	StringQueue queue;
//	queue.Push("elvira");
//	queue.Push("granqvist");
//	cout << queue.Top() << endl;
//	queue.Pop();
//	cout << queue.Top() << endl;
//	queue.Empty();
//}