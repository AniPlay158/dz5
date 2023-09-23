#include <iostream>
#include <locale>
#include "Human.h"
using namespace std;

class Room
{

private:
    int count_room = 1;
    float height = 3; // m
    float width = 5; //m
    int count_angle = 4;
    string color_wall = "green";
    bool stan_room = true;
public:
    string room_closed;


    void SetCountRoom(int count_room);
    int GetCountRoom() const;
    void SetHeight(float height);
    int GetHeight() const;
    void SetWidth(float width);
    float GetWidth() const;
    void SetCountAngle(float count_angle);
    float GetCountAngle() const;
    void SetColorWall(string color_wall);
    string GetColorWall() const;
    void TheRoomIsVentilated();
    void TheRoomIsCleaned();
    void TheRoomIsClosed(Human human);
    void TheRoomIsOpen();
    void TheRoomIsNotLit();
};

