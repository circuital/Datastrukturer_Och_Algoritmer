#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


//enum class Position
//{
//	Goalie,
//	Defence,
//	Forward,
//	Waterboy
//};
//
//class Player
//{
//	string firstName;
//	string surName;
//	Position position;
//	int salary;
//public:
//	Player(string firstName, string surName, Position position, int salary)
//	{
//		this->firstName = firstName;
//		this->surName = surName;
//		this->position = position;
//		this->salary = salary;
//	}
//	Position GetPosition() 
//	{ 
//		return position; 
//	}
//	string GetFirstName() 
//	{ 
//		return firstName; 
//	}
//	string GetSurName() 
//	{ 
//		return surName; 
//	}
//	int GetSalary() 
//	{ 
//		return salary; 
//	}
//	void SetSalary(int s) 
//	{ 
//		salary += s; 
//	}
//};
//
//int main()
//{
//	vector<int> v = {123,456,84,312,5,12,3137,69};
//	auto result = minmax_element(begin(v), end(v));
//
//	vector<Player> players
//	{
//		Player("Peter", "Forsberg", Position::Forward, 5000),
//		Player("Emil", "Forsberg", Position::Forward, 4000),
//		Player("Mats", "Sundin", Position::Forward,3000),
//		Player("Niklas", "Lidstr�m", Position::Defence,10000),
//		Player("David", "Kristensson", Position::Waterboy, 1),
//	};
//	bool foundGoalie = any_of(players.begin(), players.end(), [](Player& p) 
//	{
//		if (p.GetPosition() == Position::Goalie)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	});
//	for_each(players.begin(), players.end(), [](Player& p) 
//	{
//		p.SetSalary(10);
//	});
//	int numberOfForwards = count_if(begin(players), end(players), [](Player& p) 
//	{
//		if (p.GetPosition == Position::Forward)
//		{
//			return true;
//		}
//		return false;
//	});
//	sort(players.begin(), players.end(), [](Player p1, Player p2) 
//	{
//		if (p1.GetSurName() == p2.GetSurName())
//		{
//			return p1.GetFirstName() < p2.GetFirstName();
//		}
//		else
//		{
//			return p1.GetSurName() < p2.GetSurName();
//		}
//	});
//	for (auto& p : players) //ALIAS, BLIR EJ KOPIA
//	{
//		p.SetSalary(10);
//	}
//	for (auto p : players) //BLIR KOPIA!
//	{
//		cout << p.GetFirstName() << " " << p.GetSalary() << endl;
//	}
//}