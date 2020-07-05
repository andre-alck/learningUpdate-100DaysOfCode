/*
Author: André S. A. de Carvalho
This is a project to keep the learning process well organized on the #100DaysOfCode project.
Date: 04/07/2020
*/

#include <iostream>
#include <fstream>
#include <cstring>

#define totalDays 100.0

int main(void)
{
    std::ofstream writeOnfile("100days.txt", std::ios::app);

    int day = 0;
    do
    {
        std::cout << "Insert the day: " << std::flush;
        std::cin >> day;
    } while (day > 100 || day < 1); /*This while loop ensures the user will not enter any number > 100 or < 1*/

    std::string description = "";
    std::cout << "Insert what you did on day " << day << " of #100DaysOfCode: " << std::flush;
    std::cin.ignore(); /*Before using getline, it's necessary to clear the buffer.*/
    getline(std::cin, description);

    /*Divides the quantity of days by the total of the project (100). It's value will be stored in a float value to display the right percetage.*/
    float completed = day / totalDays;

    /*
    writeOnFile writes on the 100days.txt file.
    */
    writeOnfile << "Day: " << day << std::endl;
    writeOnfile << "Description: " << description << std::endl;
    writeOnfile << "Completed: " << completed << "%" << std::endl;
    writeOnfile << std::endl;

    return 0;
}