#include "Microphone.h"
#include <iostream>
#include <locale>
#include <windows.h>

    void Microphone::SetCordLength(float cord_length)
    {
        if (cord_length > 0)
        {
            this->cord_length = cord_length;
        }
        else
            cout << "�� ������o!";
    }
    float Microphone::GetCordLength() const
    {
        return cord_length;
    }

    void Microphone::SetFrequencyRange(int frequency_range)
    {
        if (frequency_range > 0)
        {
            this->frequency_range = frequency_range;
        }
        else
            cout << "�� ������o!";
    }
    int Microphone::Microphone::GetFrequencyRange() const
    {
        return frequency_range;
    }

    void Microphone::SetConnectionType(string connection_type)
    {
        if (connection_type != " ")
        {
            this->connection_type = connection_type;
        }
        else
            cout << "�� ������o!";
    }
    string Microphone::GetConnectionType() const
    {
        return connection_type;
    }

    void Microphone::SetBrand(string brand)
    {
        if (brand != " ")
        {
            this->brand = brand;
        }
        else
            cout << "�� ������o!";
    }
    string Microphone::GetBrand() const
    {
        return brand;
    }

    void Microphone::SetColorMicro(string color_micro)
    {
        if (color_micro != " ")
        {
            this->color_micro = color_micro;
        }
        else
            cout << "�� ������o!";
    }
    string Microphone::GetColorMicro() const
    {
        return color_micro;
    }

    void Microphone::IncludeMiro()
    {
        cout << "������� ��������..." << endl;
    }
    void Microphone::TurnOffMiro()
    {
        cout << "������� ��������..." << endl;
    }
    void Microphone::Position()
    {
        cout << position << endl;
    }
    void Microphone::Connection()
    {
        cout << connection << endl;
    }
    void Microphone::NoConnection()
    {
        cout << "������� �� �������� �� �������..." << endl;
    }
