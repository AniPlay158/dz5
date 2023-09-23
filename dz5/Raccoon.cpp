#include "Raccoon.h"
#include <iostream>
#include <locale>
using namespace std;

    void Raccoon::SetEnergy(int energy)
    {
        if (energy > 0 && energy <= 100)
        {
            this->energy = energy;
        }
        else
            cout << "�� �� �����������!";
    }
    int Raccoon::GetEnergy() const
    {
        return energy;
    }

    void Raccoon::SetHungry(int hungry)
    {
        if (hungry > 0 && hungry <= 100)
        {
            this->hungry = hungry;
        }
        else
            cout << "�� �� �����������!";
    }
    int Raccoon::GetHungry() const
    {
        return hungry;
    }

    void Raccoon::SetNick(string nick)
    {
        if (nick != " ")
        {
            this->nick = nick;
        }
        else
            cout << "�� ������o!";
    }
    string Raccoon::GetColorWool() const
    {
        return nick;
    }

    void Raccoon::SetColorWool(string color_wool)
    {
        if (color_wool != " ")
        {
            this->color_wool = color_wool;
        }
        else
            cout << "�� ������o!";
    }
    string Raccoon::GetColorWool() const
    {
        return color_wool;
    }

    void Raccoon::SetWeight(float weight)
    {
        if (weight > 0)
        {
            this->weight = weight;
        }
        else
            cout << "�� ������o!";
    }
    float Raccoon::GetWeight() const
    {
        return weight;
    }

    void Raccoon::Run(Human& human)
    {
        if (energy > 0 && hungry < 90)
        {
            cout << "���� ����� ��..." << human.GetName() << "." << endl;
            human.Say(nick);
            this->energy -= 20;
            this->hungry += 10;
            this->weight -= 0.1;
            return;
        }
        else
            cout << "� ����� ���������� ������ ��� �� ��������" << endl;
    }
    void Raccoon::MakeNoize()
    {
        if (energy > 0 && hungry < 90)
        {
            cout << noize << endl;
            this->energy -= 10;
            this->hungry += 10;
            return;
        }
        else
            cout << "� ����� ���������� ������ ��� �� ��������" << endl;
    }
    void Raccoon::Walk()
    {
        cout << "���� ������..." << endl;
    }
    void Raccoon::Eat(Human& human, string meal)
    {
        if (energy > 0 && hungry > 90)
        {
            human.ToFeed();
            cout << "���� ����..." << meal << endl;
            this->energy -= 10;
            this->hungry -= 50;
            this->weight += 0.9;
            return;
        }
        else
            cout << "� ����� ���������� ������ ��� �� ��������" << endl;
    }
    void Raccoon::Jump(Raccoon& human)
    {
        if (energy > 0 && hungry < 90)
        {
            cout << "���� ������..." << endl;
            human.MakeNoize();
            this->energy -= 10;
            this->hungry += 10;
            return;
        }
        else
            cout << "� ����� ���������� ������ ��� �� ��������" << endl;
    }
    void Raccoon::Print()
    {
        cout << "����: " << endl;
        cout << "��'�:" << nick << endl;
        cout << "³�:" << age << endl;
        cout << "������: " << energy << "%" << endl;
        cout << "�����: " << hungry << "%" << endl;
        cout << "����: " << weight << "��" << endl;
    }

