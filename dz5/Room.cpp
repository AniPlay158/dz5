#include "Room.h"
#include "Human.h"
#include <iostream>
#include <locale>
#include <windows.h>

    void Room::SetCountRoom(int count_room)
    {
        if (count_room > 0)
        {
            this->count_room = count_room;
        }
        else
            cout << "Не можливе число!";
    }
    int Room::GetCountRoom() const
    {
        return count_room;
    }

    void Room::SetHeight(float height)
    {
        if (height > 0)
        {
            this->height = height;
        }
        else
            cout << "Не можливе число!";
    }
    int Room::GetHeight() const
    {
        return height;
    }

    void Room::SetWidth(float width)
    {
        if (width > 0)
        {
            this->width = width;
        }
        else
            cout << "Не можливе число!";
    }
    float Room::GetWidth() const
    {
        return width;
    }

    void Room::SetCountAngle(float count_angle)
    {
        if (count_angle > 4)
        {
            this->count_angle = count_angle;
        }
        else
            cout << "Не можливе число!";
    }
    float Room::GetCountAngle() const
    {
        return count_angle;
    }

    void Room::SetColorWall(string color_wall)
    {
        if (color_wall != " ")
        {
            this->color_wall = color_wall;
        }
        else
            cout << "Не можливo!";
    }
    string Room::GetColorWall() const
    {
        return color_wall;
    }

    void Room::TheRoomIsVentilated()
    {
        cout << "кімната провітрюється..." << endl;
    }
    void Room::TheRoomIsCleaned()
    {
        cout << "кфмната прибирається...." << endl;
    }
    void Room::TheRoomIsClosed(Human human)
    {
        if (stan_room < false)
        {
            cout << "в замкнутій кімнаті..." << endl;
            human.Sits();
            return;
        }
        else
        {
            cout << "в відкитій кімнаті..." << endl;
            human.Sits();
            return;
        }
    }
    void Room::TheRoomIsOpen()
    {
        cout << "кімната відімкнута..." << endl;
    }
    void Room::TheRoomIsNotLit()
    {
        cout << "кімната не освітлюєься..." << endl;
    }