#include <algorithm>
#include <fstream>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"

// 1
/*int main() {
  std::stack<std::string> command_stack;

  while (true) {
    std::string user_command;
    std::cout << "Enter a command, like copy, cut, paste, insert...or undo: ";
    std::cin >> user_command;
    if (user_command != "undo") {
      command_stack.push(user_command);
    }
    if (user_command == "undo") {
      if (command_stack.size() > 0) {
        std::string answer;
        std::cout << "Do you want to undo " << command_stack.top() << " Y/N? ";
        std::cin >> answer;
        if (answer == "Y") {
          command_stack.pop();
        } else if (answer == "N") {
          continue;
        }
      } else {
        std::cout << "Can't undo unmade command!" << std::endl;
      }
    }
  }
}*/

// 2
/*std::string reverse(const std::string s) {
  std::stack<char> char_stack;
  for (char c : s) {
    char_stack.push(c);
  }
  std::string reversed_string;
  while (!char_stack.empty()) {
    reversed_string += char_stack.top();
    char_stack.pop();
  }
  return reversed_string;
}

int main() {
  while (true) {
    std::string user_string;
    std::cout << "Enter a word: ";
    std::cin >> user_string;
    std::string reversed_string = reverse(user_string);
    std::cout << reversed_string << std::endl;
  }
}*/

// 3
/*class StringStack {
  std::vector<std::string> strings;

public:
  bool empty() const { return strings.empty(); }

  unsigned long size() const { return strings.size(); }

  std::string top() const { return strings.back(); }

  void push(const std::string s) { strings.push_back(s); }

  void pop() { strings.pop_back(); }
};

int main() {
  StringStack stack;
  stack.push("elvira");
  stack.push("sandra");
  while (!stack.empty()) {
    std::cout << "Current size: " << stack.size() << std::endl;
    std::cout << "Current top: " << stack.top() << std::endl;
    stack.pop();
  }
}*/

// 4
/*bool isBalanced(const std::string &s) {
  std::stack<char> char_stack;
  for (char c : s) {
    if (c == '(' || c == '[' || c == '{')
      char_stack.push(c);
    else if (c == ')' && char_stack.top() == '(') {
      char_stack.pop();
    } else if (c == ']' && char_stack.top() == '[') {
      char_stack.pop();
    } else if (c == '}' && char_stack.top() == '{') {
      char_stack.pop();
    }
  }
  return char_stack.empty();
}

int main() {
  std::ifstream infile;
  infile.open("/Users/elvirag/src/private/Datastrukturer_Och_Algoritmer/"
              "txt_files/randomCode.txt",
              std::ifstream::in);
  std::string randomCode;
  std::string line;
  while (!infile.eof()) {
    getline(infile, line);
    randomCode += line;
  }
  infile.close();
  if (isBalanced(randomCode)) {
    std::cout << "Balanced!" << std::endl;
  } else
    std::cout << "Not balanced!" << std::endl;
}*/

#pragma clang diagnostic pop