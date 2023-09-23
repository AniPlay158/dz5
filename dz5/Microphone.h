#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

class Microphone
{
private:
    string color_micro = "black";
    bool buttom = true;//íàÿâí³òü êíîïêè äëÿ âìèêàííÿ ì³êðî
    string brand = "Trust GXT";
    int frequency_range = 5000;
    float cord_length = 1.5;//m
    string position;
    string connection;
    string connection_type = "USB";
public:

    void SetCordLength(float cord_length);
    float GetCordLength() const;
    void SetFrequencyRange(int frequency_range);
    int GetFrequencyRange() const;
    void SetConnectionType(string connection_type);
    string GetConnectionType() const;
    void SetBrand(string brand);
    string GetBrand() const;
    void SetColorMicro(string color_micro);
    string GetColorMicro() const;
    void IncludeMiro();
    void TurnOffMiro();
    void Position();
    void Connection();
    void NoConnection();
};
