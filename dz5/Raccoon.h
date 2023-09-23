#include <iostream>
#include <locale>
#include "Human.h"
using namespace std;

class Raccoon
{
private:
    string color_wool = "gray";
    float weight;
    string eyes_color = "green";
    string nick;
    string gender = "man";
    int energy;
    int hungry;
    string smell = "stink";
    bool wool = true;
public:
    string noize;
    int age;


    void SetEnergy(int energy);
    int GetEnergy() const;
    void SetHungry(int hungry);
    int GetHungry() const;
    void SetNick(string nick);
    string GetColorWool() const;
    void SetColorWool(string color_wool);
    string GetColorWool() const;
    void SetWeight(float weight);
    float GetWeight() const;
    void Run(Human& human);
    void MakeNoize();
    void Walk();
    void Eat(Human& human, string meal);
    void Jump(Raccoon& human);
    void Print();
};
