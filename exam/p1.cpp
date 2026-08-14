#include <iostream>
using namespace std;

class Rental 
{
public:
    
    double calculateCost(int days) 
    {
        return days * 500.0;
    }

    
    double calculateCost(int days, double kilometers) 
    {
        return (days * 500.0) + (kilometers * 8.0);
    }
};

int main() 
{
    Rental r;

    
    double cost1 = r.calculateCost(5);
    cout << "Cost for 5 days (no distance) = " << cost1 << endl;

    double cost2 = r.calculateCost(5, 120.0);
    cout << "Cost for 5 days + 120 km = " << cost2 << endl;

    return 0;
}

