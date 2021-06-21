#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
// 1
/*class Patient {
  std::string name;
  time_t startTime = time(nullptr);

public:
  Patient(const std::string n) { name = n; }
  std::string getName() const { return name; }
  time_t getStartTime() const { return startTime; }
};

void addPatient(std::queue<Patient> &patient_queue, const std::string &name) {
  Patient new_patient = Patient(name);
  patient_queue.push(new_patient);
}

Patient getNextPatient(const std::queue<Patient> &patient_queue) {
  Patient next_patient = patient_queue.front();
  return next_patient;
}

int main() {
  std::queue<Patient> patient_queue;
  while (true) {
    int selection;
    std::cout << "1. Add patient.\n2. Get next patient.\nEnter menu selection:";
    std::cin >> selection;
    if (selection == 1) {
      std::string name;
      std::cout << "Enter the patients name: ";
      std::cin >> name;
      addPatient(patient_queue, name);
    } else if (selection == 2) {
      if (!patient_queue.empty()) {
        time_t endTime = time(nullptr);
        std::cout << "Next patient is "
                  << getNextPatient(patient_queue).getName()
                  << ", waiting time: "
                  << endTime - getNextPatient(patient_queue).getStartTime()
                  << " sec." << std::endl;
        patient_queue.pop();
      } else {
        std::cout << "No patients waiting." << std::endl;
      }
    }
  }
}*/

// 2
/*class StringQueue {
  std::vector<std::string> strings;

public:
  bool empty() const { return strings.empty(); }

  int size() const { return strings.size(); }

  std::string front() const { return strings.front(); }

  void push(const std::string s) { strings.push_back(s); }

  void pop() { strings.erase(strings.begin()); }
};

int main() {
  StringQueue queue;
  queue.push("elvira");
  queue.push("sandra");
  while (!queue.empty()) {
    std::cout << "Current size: " << queue.size() << std::endl;
    std::cout << "Current front: " << queue.front() << std::endl;
    queue.pop();
  }
}*/

#pragma clang diagnostic pop