/*
#include <exception>
#include <iostream>

using namespace std;

int CallFunction(int num) {
  if (num == 0) {
    throw invalid_argument("Num can't be 0");
  }
  return num + 1;
}

int TestMe(int num) { return CallFunction(num); }

int main() {
  try {
    cout << TestMe(0) << endl;
  } catch (invalid_argument &error) {
    cout << error.what() << endl;
  }

  try {
    cout << TestMe(1) << endl;
  } catch (invalid_argument &error) {
    cout << error.what() << endl;
  }
}*/
