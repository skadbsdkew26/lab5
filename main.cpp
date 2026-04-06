 #include <iostream>
 #include <cmath>

 int inputInteger();

 bool isValidScore(int);

 char getGrade(int);

 double power(double, double);

 double getPower(double, double);

 int main()
 {
 
    std::cout << "03 Nam Yuna 2617014\n";

    int score = inputInteger();

    if (!isValidScore(score))
    {
        std::cout << "Invalid score\n";
        std::exit(-1);
    }
    
    std::cout << getGrade(score) << std::endl;

    std::cout << power(3,4) << std::endl;

    std::cout << getPower(3,4) << std::endl;

    std::cout << pow(3,4) << std::endl;

    return 0;

 }

int inputInteger()
{
    int n{};
    std::cout <<" Enter integer: ";
    std::cin >> n;
    return n;
}

bool isValidScore(int score)
{
    return score >= 0 && score <= 100;
}

char getGrade(int score)
{
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

double power(double d1, double d2)
{
    if (d2 == 0) return 1;
    return d1 * power(d1, d2-1);

}

double getPower(double d1, double d2)
{
    double p{ 1 };
    for (int i = 0; i < d2; ++i)
            p *= d1;
    return p;    
}









 