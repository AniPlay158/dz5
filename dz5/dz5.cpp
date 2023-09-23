#include <iostream>
#include <locale>
#include <windows.h>
#include "Human.h"
#include "Room.h"
#include "MobilePhone.h"
#include "Raccoon.h"
#include "Microphone.h"
using namespace std;

int main()
{
    //setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Human m;
    m.SetName("Ангеліна");
    m.SetLaugh("ХА-ХА-ХА!");
    m.SetEnergy(90);//%
    m.SetAge(18);//ðîê³â
    m.SetGrowth(170.2);//ñì
    m.SetHairColor("русий³");
    m.SetGender("жінка");
    m.sits = false;
    m.SetHungry(30);

    MobilePhone mb;

    Raccoon r;
    r.noize = "ГРРР!";
    r.SetNick("Степан");
    r.SetWeight(5.6); //kg
    r.age = 2;
    r.SetEnergy(100);
    r.SetHungry(70);

    Room room;
    room.room_closed = "кімната замкнута...";
    string meal;

    m.Print();
    r.Print();
    cout << "------------------------------------" << endl;
    room.TheRoomIsClosed(m);
    mb.WatchingVideo(m);
    r.Run(m);
    r.Jump(r);
    cout << "Що буде їсти єнот?" << endl;
    cin >> meal;
    r.Eat(m, meal);
    cout << "------------------------------------" << endl;
    m.Print();
    r.Print();


}