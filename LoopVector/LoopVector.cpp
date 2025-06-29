// LoopVector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> db(20,0);
    std::cout << "input: -2 for Exit , input: -1 for output vector items  \n";
    int userInput = 0;
    int iter = 0;

    while (userInput != -2) {
        std::cout << "\ninput number: ";
        std::cin >> userInput;
        switch (userInput)
        {
        case -1 :
            for (size_t i = iter; i < db.size(); i++)
            {
                std::cout << db[i] << " ";
            }
            for (size_t i = 0; i < iter; i++)
            {
                std::cout << db[i] << " ";
            }
            break;
        case -2: break;
        default:
            db[iter] = userInput;
            iter++;
            if (iter == 20)
            {
                iter = 0;
            }
            break;
        }
    
    }

    
}