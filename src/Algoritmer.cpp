#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

// 1
/*int main() {
  std::vector<char> letters;
  for (char ch = 'a'; ch <= 'z'; ch++) {
    letters.push_back(ch);
  }
  sort(letters.begin(), letters.end());
  for_each(letters.begin(), letters.end(), [&letters](const char &ch) {
    if (find(letters.begin(), letters.end(), ch) != letters.end() - 1) {
      std::cout << ch << ", ";
    } else {
      std::cout << ch << "." << std::endl;
    }
  });
  //reverse(letters.begin(), letters.end());
  for (int i = 0; i < (letters.size() - 1) / 2; i++)
  {
    std::swap(letters[i], letters[letters.size() -1 - i]);

  }
  for_each(letters.begin(), letters.end(), [&letters](const char &ch) {
    if (find(letters.begin(), letters.end(), ch) != letters.end() - 1) {
      std::cout << ch << ", ";
    } else {
      std::cout << ch << "." << std::endl;
    }
  });
}*/

// 2
/*int main() {
  std::vector<std::string> cars;
  std::ifstream infile;
  infile.open("/Users/elvirag/src/private/Datastrukturer_Och_Algoritmer/txt_files/cars.txt",
std::ifstream::in); std::string car; while (!infile.eof()) { getline(infile,
car); if (!car.empty()) { cars.push_back(car);
    }
  }
  infile.close();
  sort(cars.begin(), cars.end(), [](const std::string &s1, const std::string
&s2) { return s1.size() < s2.size();
  });
  for_each(cars.begin(), cars.end(), [&cars](const std::string &s) {
    if (find(cars.begin(), cars.end(), s) != cars.end() - 1) {
      std::cout << s << ", ";
    } else {
      std::cout << s << "."<< std::endl;
    }
  });
}*/

// 3
/*int main() {
  std::vector<std::string> birds;
  std::ifstream infile;
  infile.open("/Users/elvirag/src/private/Datastrukturer_Och_Algoritmer/"
              "txt_files/birds.txt",
              std::ifstream::in);
  std::string bird;
  while (!infile.eof()) {
    getline(infile, bird);
    if (!bird.empty()) {
      birds.push_back(bird);
    }
  }
  infile.close();
  int numberOfB =
      count_if(birds.begin(), birds.end(), [](const std::string &bird) {
        return (bird[0] == 'B' || bird[0] == 'b');
      });
  int numberOfDOrLongerThan10 =
      count_if(birds.begin(), birds.end(), [](const std::string &bird) {
        return (bird[0] == 'D' || bird[0] == 'd' || bird.size() > 10);
      });
  std::cout << "Number of birds that begin with b: " << numberOfB << std::endl;
  std::cout
      << "Number of birds that begin with d or is more than 10 characters : "
      << numberOfDOrLongerThan10 << std::endl;
}*/

// 4
/*int main() {
  std::vector<std::string> birds;
  std::ifstream infile;
  infile.open("/Users/elvirag/src/private/Datastrukturer_Och_Algoritmer/"
              "txt_files/birds.txt",
              std::ifstream::in);
  std::string bird;
  while (!infile.eof()) {
    getline(infile, bird);
    if (!bird.empty()) {
      birds.push_back(bird);
    }
  }
  infile.close();
  int numberWithKad =
      count_if(birds.begin(), birds.end(), [](const std::string &bird) {
        return (bird.find("kad") != std::string::npos);
      });
  std::vector<std::string> birdsMultiWord;
  copy_if(birds.begin(), birds.end(), back_inserter(birdsMultiWord),
          [](const std::string &bird) {
            return (bird.find(" ") != std::string::npos);
          });
  std::cout << "Number of birds that contain kad: " << numberWithKad
            << std::endl;
  for_each(birdsMultiWord.begin(), birdsMultiWord.end(),
           [](const std::string bird) { std::cout << bird << std::endl; });
}*/

// Birds 3 OK
/*int main() {
  std::vector<std::string> birds;
  std::ifstream infile;
  infile.open("/Users/elvirag/src/private/Datastrukturer_Och_Algoritmer/txt_files/birds.txt",
std::ifstream::in); std::string bird; while (!infile.eof()) { getline(infile,
bird); if (!bird.empty()) { birds.push_back(bird);
    }
  }
  infile.close();
  for_each(birds.begin(), birds.end(), [](std::string &bird) {
    transform(bird.begin(), bird.end(), bird.begin(),
              [](char &ch) { return toupper(ch); });
  });
  for_each(birds.begin(), birds.end(),
           [](const std::string &bird) { std::cout << bird << std::endl; });
}*/

// 6
/*
int main() {
  // a
  std::vector<std::string> words;
  std::ifstream infile;
  infile.open("/Users/elvirag/src/private/Datastrukturer_Och_Algoritmer/txt_files/randomText.txt", std::ifstream::in);
  std::string line;
  while (!infile.eof()) {
    getline(infile, line);
    std::string word;
    for (char &ch : line)
      if (ch != ' ') {
        word += ch;
      } else {
        words.push_back(word);
        word = "";
      }
  }
  infile.close();

  // b
  sort(words.begin(), words.end());
  for_each(words.begin(), words.end(),
           [](const std::string &word) { std::cout << word << std::endl; });

  // c
  std::cout << "Number of words: " << words.size() << std::endl;
  std::vector<std::string> uniqueWords = words;
  uniqueWords.erase(unique(uniqueWords.begin(), uniqueWords.end()),
                    uniqueWords.end());
  std::cout << "Number of unique words: " << uniqueWords.size() << std::endl;

  // d
  sort(words.begin(), words.end(), [](const std::string &s1, const std::string &s2) {
    if (s1.size() == s2.size()) {
      return s1 < s2;
    } else {
      return s1.size() < s2.size();
    }
  });
  for_each(words.begin(), words.end(),
           [](const std::string &word) { std::cout << word << std::endl; });

  // e
  float longerThan5 = count_if(words.begin(), words.end(), [](const std::string &s) {
    return (s.size() > 5);
  });
  std::cout << "Longer than 5 letters: " << longerThan5 << std::endl;
  std::cout << "Fraction that is longer than 5 letters: "
       << longerThan5 / words.size() << std::endl;

  // f
  std::vector<std::string> badWords = {"and", "but", "do", "if",   "in",  "is", "its",
                             "not", "of",  "or", "that", "the", "to"};
  std::vector<std::string> withoutBadWords = words;
  withoutBadWords.erase(
      remove_if(withoutBadWords.begin(), withoutBadWords.end(),
                [badWords](const std::string &s) {
                  return find(badWords.begin(), badWords.end(), s) !=
                         badWords.end();
                }),
      withoutBadWords.end());
  std::cout << "Without bad words: " << withoutBadWords.size() << std::endl;
}*/
