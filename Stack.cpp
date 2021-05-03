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

//1
//class Command
//{
//public:
//	string commandName;
//};
//
//int main()
//{
//	stack<Command> commandStack;
//
//	while (true)
//	{
//		Command userCommand;
//		cout << "Enter a command, like copy, cut, paste, insert...or undo: ";
//		cin >> userCommand.commandName;
//		if (userCommand.commandName != "undo")
//		{
//			commandStack.push(userCommand);
//		}
//		if (userCommand.commandName == "undo")
//		{
//			if (commandStack.size() > 0)
//			{
//				string answer;
//				cout << "Do you want to undo " << commandStack.top().commandName << " Y/N? ";
//				cin >> answer;
//				if (answer == "Y")
//				{
//					commandStack.pop();
//				}
//				else if (answer == "N")
//				{
//					continue;
//				}
//			}
//			else
//			{
//				cout << "Can't undo unmade command!" << endl;
//			}
//		}
//	}
//}

//1.5
//string Reverse(string s)
//{
//	stack<char> charStack;
//	for (int i = 0; i < s.size(); i++)
//	{
//		charStack.push(s[i]);
//	}
//	string reversedString;
//	while (charStack.size() > 0)
//	{
//		reversedString += charStack.top();
//		charStack.pop();
//	}
//	return reversedString;
//}
//
//int main()
//{
//	while (true)
//	{
//		string userString;
//		cout << "Enter a word: ";
//		cin >> userString;
//		string reversedString = Reverse(userString);
//		cout << reversedString << endl;
//	}
//}

//1.75
//class StringStack
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
//		strings.pop_back();
//	}
//
//	void Empty()
//	{
//		strings.clear();
//	}
//
//	string Top()
//	{
//		return strings.back();
//	}
//};
//
//int main()
//{
//	StringStack stack;
//	stack.Push("elvira");
//	stack.Push("granqvist");
//	cout << stack.Top() << endl;
//	stack.Pop();
//	cout << stack.Top() << endl;
//	stack.Empty();
//}

//2


