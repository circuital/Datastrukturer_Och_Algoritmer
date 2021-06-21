#include <iostream>
#include <string>
#include <vector>

// Demo 1
/*class Album {
  std::string name;
  std::string artist;
  int tracks;

public:
  void newAlbum(std::string newName, std::string newArtist,
                int numberOfTracks) {
    name = newName;
    artist = newArtist;
    tracks = numberOfTracks;
  }
  void printInfo() {
    std::cout << "Artist: " << this->artist << std::endl;
    std::cout << "Album: " << this->name << std::endl;
    std::cout << "Number of tracks: " << this->tracks << std::endl;
  }
};

class Person {
  std::string name;
  int age;

public:
  void newPerson(std::string newName, int newAge) {
    name = newName;
    age = newAge;
  }
  std::string GetName() { return this->name; }
  int GetAge() { return this->age; }
};

template <class datatype> class MyList {
  std::vector<datatype> v;

public:
  void Add(datatype newitem) { v.push_back(newitem); }
  int Count() { return v.size(); }
  datatype GetAt(int index) { return v[index - 1]; }
};

int main() {
  MyList<Person> l1;
  MyList<Album> l2;
  Person p;
  Album a;
  a.newAlbum("Slime", "thugger", 12);
  l2.Add(a);
  a.newAlbum("MTBDM", "Kanye", 15);
  l2.Add(a);
  a.newAlbum("Illmatic", "Nas", 10);
  l2.Add(a);
  a.newAlbum("Carter 5", "Lil Wayne", 18);
  l2.Add(a);

  p.newPerson("calle", 28);
  l1.Add(p);
  p.newPerson("wille", 26);
  l1.Add(p);
  p.newPerson("matilda", 30);
  l1.Add(p);
  p.newPerson("soifa", 33);
  l1.Add(p);
  p.newPerson("denny", 39);
  l1.Add(p);

  for (int i = 1; i <= l1.Count(); i++) {
    Person p1 = l1.GetAt(i);
    std::cout << p1.GetName() << " " << p1.GetAge() << " �r" << std::endl;
  }

  for (int i = 1; i <= l2.Count(); i++) {
    Album a2 = l2.GetAt(i);
    a2.printInfo();
  }
}*/

// Demo 2
/*
template <class changingType> float CalculateTax(changingType a1) {
  if (a1 > 10000) {
    return a1 * 0.5f;
  } else {
    return a1 * 0.4f;
  }
}

class HockeyPlayer {};

class BasketPlayer {};

template <class playerType> class MySuperTeam {
public:
  std::vector<playerType> players;
};

int main() {
  float tax = CalculateTax<int>(5000);
  tax = CalculateTax<int>(12000);
  tax = CalculateTax<float>(12000.34f);

  MySuperTeam<HockeyPlayer> team;
  team.players.push_back(HockeyPlayer());

  MySuperTeam<BasketPlayer> team2;
  team2.players.push_back(BasketPlayer());
}*/
