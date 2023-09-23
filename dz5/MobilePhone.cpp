#include "MobilePhone.h"
#include <iostream>
#include <locale>
#include <windows.h>

    void MobilePhone::SetColorPhone(string color_phone)
    {
        if (color_phone != " ")
        {
            this->color_phone = color_phone;
        }
        else
            cout << "Не можливo!";
    }
    string MobilePhone::GetColorPhone() const
    {
        return color_phone;
    }

    void MobilePhone::SetColorCase(string case_color)
    {
        if (case_color != " ")
        {
            this->case_color = case_color;
        }
        else
            cout << "Не можливo!";
    }
    string MobilePhone::GetColorCase() const
    {
        return case_color;
    }

    void MobilePhone::SetCountCamers(int count_camers)
    {
        if (count_camers > 0)
        {
            this->count_camers = count_camers;
        }
        else
            cout << "Не можливo!";
    }
    int MobilePhone::GetCoubtCamers() const
    {
        return count_camers;
    }

    void MobilePhone::SetPrice(double price)
    {
        if (price > 0)
        {
            this->price = price;
        }
        else
            cout << "Не можливo!";
    }
    int MobilePhone::GetPrice() const
    {
        return price;
    }

    void MobilePhone::SetCountContact(int count_contact)
    {
        if (count_contact >= 0)
        {
            this->count_contact = count_contact;
        }
        else
            cout << "Не можливo!";
    }
    int MobilePhone::GetCountContact() const
    {
        return price;
    }

    void MobilePhone::PhoneCall()
    {
        cout << call << endl;
    }
    void MobilePhone::Vibration()
    {
        cout << "вібрація..." << endl;
    }
    void MobilePhone::TurnOnThePhone()
    {
        cout << "телефон вмикається..." << endl;
    }
    void MobilePhone::WatchingVideo(Human& human)
    {
        if (human.GetEnergy() > 0 && human.GetHungry())
        {
            if (human.sits)
            {
                cout << "дивиться ютуб..." << endl;
                human.Laugh();
                human.SetEnergy(human.GetEnergy() - 20);
                human.SetHungry(human.GetHungry() + 5);
                return;
            }
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void MobilePhone::Battery(string percent)
    {
        cout << "на тебефоні:" << percent << " %" << endl;
    }

