#include <iostream>
#include <string>
#include "PrinterGame.h"

namespace experis
{

std::string GetInputFromUser()
{
    std::string untrust_input{""};
    std::getline(std::cin, untrust_input);
    return untrust_input;
}

} // experis

int main()
{
    std::cout << "wellcome to Hnoi Tower game :)\n" << "How many layrs do you want to play (1-5)?\n";
    int numBricks = std::stoi(experis::GetInputFromUser());
    experis::Game g{numBricks};
    experis::PrinterGame::Print(g);
    while (true)
    {
        std::cout << "Enter move (from->to):\n";
        std::string input = experis::GetInputFromUser();
        if(input.compare("?") == 0)
        {
        }
        else if (input.compare("undo") == 0)
        {
        }
        else
        {
            if((input.at(0) < '1' || input.at(0) > '3') || (input.at(3) < '1' || input.at(3) > '3'))
            {
                std::cout << "invalid input. try again\n";
                continue;
            }
            int from = std::atoi(&input.at(0));
            int to = std::atoi(&input.at(3));
            g.Move(from, to);
            experis::PrinterGame::Print(g);
        }
    }
}
