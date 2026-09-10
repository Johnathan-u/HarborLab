#include <iostream>
#include <vector>

void batteryPCT()
{
    double batlevel;
    double linkQuality;
    bool positionValid;


    std::cout << "What is the battery level?\n";
    std::cin >> batlevel;
    std::cout << "What is the connection quality?\n";
    std::cin >> linkQuality;
    std::cout << "Is the position valid? Enter 1 for yes or 0 for no ";
    std::cin >> positionValid;
    bool batteryok = batlevel >= 0 && batlevel <= 100;
    bool linkok = linkQuality >= 0 && linkQuality <= 1.0;
    bool telemetryok = batteryok && linkok;


    if (batlevel >= 0 && batlevel <= 100)
    {
        if (batlevel >= 80)
        {
            std::cout << "Battery level is high\n";
        }
        else if (batlevel >= 20)
        {
            std::cout << "Battery level is usable\n";
        }
        else
        {
            std::cout << "Battery is low\n";
        }
    }
    else
    {
        std::cout << "Invalid Battery input\n";
    }

    if (linkQuality >= 0 && linkQuality <= 1.0)
    {
        std::cout << "Valid connection\n";
    }
    else
    {
        std::cout << "Invalid connection\n";
    }
if(positionValid){
        std::cout << "Position is valid\n";

    }else{
        std::cout << "Position is invalid\n";
    }
    if(telemetryok){
        std::cout << "Telemetry ok\n";
    }else{
        std::cout << "Telemetry not ok\n";
    }
}
int main()
{
    std:: vector<double>batterySamples{
        85.7,34,7,46,9
    };

     for( int i =0; i<3; i++)
    {batteryPCT();}

    return 0;
}

// TODO: Inside batteryPCT(), after reading batlevel, add a new range check.

// TODO: Use && to require that batlevel is at least 0 AND at most 100.

// TODO: Inside the valid-range branch, place your existing high/usable/low decision.

// TODO: Otherwise, print "Invalid battery percentage" followed by a newline.

// TODO: Invalid values must not also print high, usable, or low.

// TODO: Test -0.1, 0, 0.1, 99.9, 100, and 100.1.

// TODO: Expect invalid, low, low, high, high, and invalid.
