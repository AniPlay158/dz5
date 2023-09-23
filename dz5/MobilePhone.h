#include "Human.h"
#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

class MobilePhone
{
private:
    string color_phone = "white";
    string brand = "iphone";
    bool case_phone = true;
    string case_color = "purple";
    int count_camers = 2;
    string port_type = "lightning";
    double price = 25999; //$
    int count_contact = 32;
    string call;
public:

    void SetColorPhone(string color_phone);
    string GetColorPhone() const;
    void SetColorCase(string case_color);
    string GetColorCase() const;
    void SetCountCamers(int count_camers);
    int GetCoubtCamers() const;
    void SetPrice(double price);
    int GetPrice() const;
    void SetCountContact(int count_contact);
    int GetCountContact() const;
    void PhoneCall();
    void Vibration();
    void TurnOnThePhone();
    void WatchingVideo(Human& human);
    void Battery(string percent);
};

