#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream> 
#include <map>
#include <iterator>

using namespace std;

//Sort OK
//int main()
//{
//	vector<char> letters;
//	for (char ch = 'a'; ch <= 'z'; ch++)
//	{
//		letters.push_back(ch);
//	}
//	sort(letters.begin(), letters.end());
//	for_each(letters.begin(), letters.end(), [&letters](char& ch)
//	{
//		if (find(letters.begin(), letters.end(), ch) != letters.end() - 1)
//		{
//			cout << ch << ", ";
//		}
//		else
//		{
//			cout << ch << ".";
//		}
//	});
//	cout << endl;
//	reverse(letters.begin(), letters.end());
//	for_each(letters.begin(), letters.end(), [&letters](char& ch)
//	{
//		if (find(letters.begin(), letters.end(), ch) != letters.end() - 1)
//		{
//			cout << ch << ", ";
//		}
//		else
//		{
//			cout << ch << ".";
//		}
//	});
//}


//Cars OK
//int main()
//{
//	vector<string> cars;
//	ifstream infile;
//	infile.open("cars_of_the_world.txt", ifstream::in);
//	string car;
//	while (!infile.eof())
//	{
//		getline(infile, car);
//		if (!car.empty())
//		{
//			cars.push_back(car);
//		}
//	}
//	infile.close();
//	sort(cars.begin(), cars.end(), [](string &s1, string &s2)
//	{
//		if (s1.size() < s2.size())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	});
//	for_each(cars.begin(), cars.end(), [&cars](string &s)
//	{
//		if (find(cars.begin(), cars.end(), s) != cars.end() - 1)
//		{
//			cout << s << ", ";
//		}
//		else
//		{
//			cout << s << ".";
//		}
//});
//}

//Birds OK
//int main()
//{
//	vector<string> birds;
//	ifstream infile;
//	infile.open("birds.txt", ifstream::in);
//	string bird;
//	while (!infile.eof())
//	{
//		getline(infile, bird);
//		if (!bird.empty())
//		{
//			birds.push_back(bird);
//		}
//	}
//	infile.close();
//	int numberOfB = count_if(birds.begin(), birds.end(), [](string& bird)
//	{
//		if (bird[0] == 'B' || bird[0] == 'b')
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	});
//	int numberOfDOrLongerThan10 = count_if(birds.begin(), birds.end(), [](string& bird)
//	{
//		if (bird[0] == 'D' || bird[0] == 'd' || bird.size() > 10)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	});
//	cout << "Number of birds that begin with b: " << numberOfB << endl;
//	cout << "Number of birds that begin with d or is more than 10 characters: " << numberOfDOrLongerThan10 << endl;
//}

//Birds 2 OK
//int main()
//{
//	vector<string> birds;
//	ifstream infile;
//	infile.open("birds.txt", ifstream::in);
//	string bird;
//	while (!infile.eof())
//	{
//		getline(infile, bird);
//		if (!bird.empty())
//		{
//			birds.push_back(bird);
//		}
//	}
//	infile.close();
//	int numberWithKad = count_if(birds.begin(), birds.end(), [](string& bird)
//	{
//		if (bird.find("kad") != string::npos)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	});
//	vector<string> birdsMultiWord; 
//	copy_if(birds.begin(), birds.end(), back_inserter(birdsMultiWord), [](string &bird)
//	{
//		if (bird.find(" ") != string::npos)
//		{
//			return true;
//		}
//		return false;
//	});
//	cout << "Number of birds that contain kad: " << numberWithKad << endl;
//	for_each(birdsMultiWord.begin(), birdsMultiWord.end(), [](string bird)
//	{
//		cout << bird << endl;
//	});	
//}

//Birds 3 OK
//int main()
//{
//	vector<string> birds;
//	ifstream infile;
//	infile.open("birds.txt", ifstream::in);
//	string bird;
//	while (!infile.eof())
//	{
//		getline(infile, bird);
//		if (!bird.empty())
//		{
//			birds.push_back(bird);
//		}
//	}
//	infile.close();
//	for_each(birds.begin(), birds.end(), [](string& bird)
//	{
//		transform(bird.begin(), bird.end(), bird.begin(), [](char ch)
//			{
//				return toupper(ch);
//			});
//	});
//	for_each(birds.begin(), birds.end(), [](string& bird)
//	{
//		cout << bird << endl;
//	});
//}

//Lite av varje OK
//int main()
//{
//	vector<string> words;
//	ifstream infile;
//	infile.open("random.txt", ifstream::in);
//	string line;
//	while (!infile.eof())
//	{
//		getline(infile, line);
//		string word;
//		for (auto &ch : line)
//			if (ch != ' ')
//			{
//				word += ch;
//			}
//			else 
//			{
//				words.push_back(word);
//				word = "";
//			}
//	}
//	infile.close();
//	sort(words.begin(), words.end());
//	//for (auto s : words)
//	//{
//	//	cout << s << endl;
//	//}
//	cout << "Original: " << words.size() << endl;
//	vector<string> uniqueWords = words;
//	uniqueWords.erase(unique(uniqueWords.begin(), uniqueWords.end()), uniqueWords.end());
//	//for (auto s : words)
//	//{
//	//	cout << s << endl;
//	//}
//	cout << "Without duplicates: " << uniqueWords.size() << endl;
//	sort(words.begin(), words.end(), [](string& s1, string& s2)
//	{
//		if (s1.size() == s2.size())
//		{
//			return s1 < s2;
//		}
//		else
//		{
//			return s1.size() < s2.size();
//		}
//	});
//	//for (auto s : words)
//	//{
//	//	cout << s << endl;
//	//}
//	float longerThan5 = count_if(words.begin(), words.end(), [](string& s)
//	{
//		if (s.size() > 5)
//		{
//			return true;
//		}
//		return false;
//	});
//	cout << "Longer than 5 letters: " << longerThan5 << endl;
//	cout << "Fraction that is longer than 5 letters: " << longerThan5 / words.size() << endl;
//	vector<string> badWords = {"and", "but", "do", "if", "in", "is", "its", "not", "of", "or" , "that", "the", "to"};
//	vector<string> withoutBadWords = words;
//	withoutBadWords.erase(remove_if(withoutBadWords.begin(), withoutBadWords.end(), [badWords](string s)
//		{
//			return find(badWords.begin(), badWords.end(), s) != badWords.end();
//		}), withoutBadWords.end());
//	cout << "Without bad words: " << withoutBadWords.size() << endl;
//
//	map<string, int> wordMap;
//	map<string, int>::iterator it;
//	for_each(words.begin(), words.end(), [&wordMap](string word)
//	{
//		if (wordMap.find(word) != wordMap.end())
//		{
//			wordMap[word] += 1;
//		}
//		else
//		{
//			wordMap.insert({word, 1});
//		}
//	});
//	for_each(wordMap.begin(), wordMap.end(), [](auto it)
//	{
//		cout << it.first << "\t" << it.second << endl;
//	});
//}