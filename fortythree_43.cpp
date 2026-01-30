#include <iostream>

int main()
{
    std::string questions[] = {"1. What year is C++ created?: ", "2. Who is the creator of C++?: ", "3. What is the predecessor of C++?: ", "4. Is Earth flat?: "};
    std::string options[][4] = {{"A. 1979", "B. 1985", "C. 1985", "D. 1989"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carnack", "D. Mark Zuckerberg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. sometimes", "D. what's earth?"}};
    char AnsKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score=0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "***********" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "***********" << '\n';
        for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Enter your choice: ";
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == AnsKey[i])
        {
            std::cout << "CORRECT!\n";
            score++;
        }
        else
        {
            std::cout << "WRONG! The correct answer is " << AnsKey[i] << '\n';
        }

        std::cout << "***********" << '\n';
        std::cout << "RESULT!" << '\n';
        std::cout << "***********" << '\n';

        std::cout<<"Your correct guesses is: "<<score<<'\n';
        std::cout<<"No of questions: "<<size<<'\n';
        std::cout<<"your percentage score is: "<<(score/(double)size*100)<<"%\n";

    }

    return 0;
}