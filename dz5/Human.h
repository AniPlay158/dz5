#include <iostream>
#include <locale>
using namespace std;

class Human 
{
private:
    float growth;
    string hair_color;
    string name;
    string gender;
    int age;
    string laugh;
    string massage;
    bool tshirts;
    string color_tshorts;
    int energy;
    int hungry;

public:
    bool sits;

    void SetGrowth(float growth);
    float GetGrowth() const;
    void SetHairColor(string hair_color);
    string GetHairColor() const;
    void SetName(string name);
    string GetName() const;
    void SetGender(string gender);
    string GetGender() const;
    void SetAge(int age);
    int GetAge() const;
    void SetLaugh(string laugh);
    string GetLaugh() const;
    void SetMassage(string massage);
    string GetMassage() const;
    void SetEnergy(int energy);
    int GetEnergy() const;
    void SetHungry(int hungry);
    int GetHungry() const;
    void Sits();
    void Drink(string liquid);
    void Say(string nick);
    void Laugh();
    void ToFeed();
    void Print();
};
