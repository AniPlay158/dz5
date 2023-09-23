#include "Human.h"
#include <iostream>
#include <locale>
#include <windows.h>

    void Human:: SetGrowth(float growth)
    {
        if (growth > 0 && growth <= 50)
        {
            this->growth = growth;
        }
        else
            cout << "Ви не можете встановити такий рівень голоду (1 - 50)";
    }
    float Human::GetGrowth() const
    {
        return growth;
    }

    void Human::SetHairColor(string hair_color)
    {
        if (hair_color != "white")
        {
            this->hair_color = hair_color;
        }
        else
            cout << "Ви не можете встановити такий колір волосся!";
    }
    string Human::GetHairColor() const
    {
        return hair_color;
    }

    void Human::SetName(string name)
    {
        if (name != " ")
        {
            this->name = name;
        }
        else
            cout << "Ви не можете вписати таке ім'я!";
    }
    string Human::GetName() const
    {
        return name;
    }

    void Human::SetGender(string gender)
    {
        if (gender != "male" || gender != "female")
        {
            this->gender = gender;
        }
        else
            cout << "Немає такого гендеру!";
    }
    string Human::GetGender() const
    {
        return gender;
    }

    void Human::SetAge(int age)
    {
        if (age > 1 && age < 99)
        {
            this->age = age;
        }
        else
            cout << "Не можливе значення!";
    }
    int Human::GetAge() const
    {
        return age;
    }

    void Human::SetLaugh(string laugh)
    {
        if (laugh != " ")
        {
            this->laugh = laugh;
        }
        else
            cout << "Це не сміх!";
    }
    string Human::GetLaugh() const
    {
        return laugh;
    }

    void Human::SetMassage(string massage)
    {
        if (massage != " ")
        {
            this->massage = massage;
        }
        else
            cout << "Це не повідомлення!";
    }
    string Human::GetMassage() const
    {
        return massage;
    }

    void Human::SetEnergy(int energy)
    {
        if (energy > 0 && energy <= 100)
        {
            this->energy = energy;
        }
        else
            cout << "Це не повідомлення!";
    }
    int Human::GetEnergy() const
    {
        return energy;
    }

    void Human::SetHungry(int hungry)
    {
        if (hungry > 0 && hungry <= 100)
        {
            this->hungry = hungry;
        }
        else
            cout << "Це не повідомлення!";
    }
    int Human::GetHungry() const
    {
        return hungry;
    }

    void Human::Sits()
    {
        cout << name << " сидить..." << endl;
        sits = true;
        if (hungry < 90 && energy > 0)
        {
            this->hungry += 5;
            this->energy -= 1;
            return;

        }
        else
            cout << "Хочу їсти" << endl;
    }
    void Human::Drink(string liquid)
    {
        if (energy > 0 && hungry < 90)
        {
            cout << name << " п'є..." << liquid << endl;
            this->energy -= 20;
            this->hungry -= 10;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Human::Say(string nick)
    {
        if (energy > 0 && hungry < 90)
        {
            cout << "Хей!" << nick << " хочешь їсти?" << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Human::Laugh()
    {
        if (energy > 0 && hungry < 90)
        {
            cout << laugh << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Human::ToFeed()
    {
        if (energy > 0 && hungry < 90)
        {
            cout << name << " годує... " << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Human::Print()
    {
        cout << "Людинa: " << endl;
        cout << "Ім'я:" << name << endl;
        cout << "Вік:" << age << endl;
        cout << "Енергія: " << energy << "%" << endl;
        cout << "Голод: " << hungry << "%" << endl;
    }
