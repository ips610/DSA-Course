#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to find starting point where the truck can start to get through
    // the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[], int n)
    {
        // Your code here
        int defi = 0;
        int start = 0;
        int balance = 0;

        for (int i = 0; i < n; i++)
        {
            balance += p[i].petrol - p[i].distance;
            if (balance < 0)
            {
                start = i + 1;
                defi += balance;
                balance = 0;
            }
        }

        if (defi + balance >= 0)
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
};