//
//  main.cpp
//  BCS-370-Module-3
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>

using namespace std;

class CuteRobot
{
private:
    int position;
public:
    CuteRobot()
    {
        position = 0;
    }
    CuteRobot(int p)
    {
        this->position = p;
    }
    int getPosition()
    {
        return position;
    }
    CuteRobot& move(int steps)
    {
        position += steps;
        return *this;
    }
    void meet(CuteRobot *cr)
    {
        int steps = this->position - cr->position;
        cout << endl << "Move " << steps << " steps";
        move(steps);
    }
};

int main() {
    CuteRobot cr[5] = { CuteRobot(0), CuteRobot(1), CuteRobot(2), CuteRobot(3), CuteRobot(4)};
    for(int i = 1; i < 5; i++)
    {
        (cr + i)->meet(cr);
    }
    return 0;
}
