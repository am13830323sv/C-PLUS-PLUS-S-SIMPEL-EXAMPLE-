#include <iostream>

#define Sum 1
#define Subtraction 2
#define Multiplication 3
#define Division 4

#define Exit 0
#define NewCalculating 1

int main(int argc, const char *argv[])
{
    long long int NumberOne = 0;
    long long int NumberTwo = 0;

    unsigned short int Operation;

    unsigned short int Status = NewCalculating;

    std::cout << "Welcome To Simple Calculator" << std::endl;

    while (Status)
    {
        std::cout << "Please Enter Number One (Integer) : ";
        std::cin >> NumberOne;

        std::cout << "Please Enter Number Two (Integer) : ";
        std::cin >> NumberTwo;

        while (true)
        {
            std::cout << "1) Sum" << std::endl
                      << "2) Subtraction" << std::endl
                      << "3) Multiplication" << std::endl
                      << "4) Division" << std::endl;
            std::cout << "Please Enter Yout Operation : ";
            std::cin >> Operation;

            if (Operation < Sum || Operation > Division)
            {
                std::cout << "Error : Your Operation Not Exist" << std::endl;

                continue;
            }

            else
            {
                break;
            }
        }

        switch (Operation)
        {
        case Sum:
        {
            std::cout << NumberOne << " + " << NumberTwo << " = " << (NumberOne + NumberTwo) << std::endl;

            break;
        }

        case Subtraction:
        {
            std::cout << NumberOne << " - " << NumberTwo << " = " << (NumberOne - NumberTwo) << std::endl;

            break;
        }

        case Multiplication:
        {
            std::cout << NumberOne << " * " << NumberTwo << " = " << (NumberOne * NumberTwo) << std::endl;

            break;
        }

        case Division:
        {
            if (NumberTwo == 0)
            {
                std::cout << "Error : Divide To Zero" << std::endl;

                break;
            }

            else
            {
                std::cout << NumberOne << " / " << NumberTwo << " = " << (NumberOne / NumberTwo) << std::endl;
            }
            break;
        }
        }

        while (true)
        {
            std::cout << "0) Exit" << std::endl
                      << "1) NewCalculating" << std::endl;
            std::cout << "Please Enter A Status : ";
            std::cin >> Status;

            if (Status < Exit || Status > NewCalculating)
            {
                std::cout << "Error : Your Status Not Exist" << std::endl;

                continue;
            }

            else
            {
                break;
            }
        }
    }

    return 0;
}