#ifndef ASEJU_H
#define ASEJU_H
 
#include<string>

class Candidate{
    public:
        Candidate(std::string a, std::string b);
    
        void DisplayGrade(int grade);

        void autoMails(std::string emaillist[], int batchsize);

        void displayText();
    
    private:
        std::string name, year;

};


#endif