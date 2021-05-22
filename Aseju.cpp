#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <map>
#include <string>
#include "aseju.h"



    Candidate::Candidate(std::string a, std::string b) {

        name = a;
        year = b;
        std::cout << "Hello " << name << ". Welcome to the Job application process for the year " << year << std::endl;
    }

    void Candidate::DisplayGrade(int grade) {

        std::cout << "This will show how you performed in our test " << std::endl;
        std::cout << "Hello " << name << ". You got "<< grade << "% in this "<< year << " assesment"<< std::endl;
    }

    void Candidate::autoMails(std::string emaillist[], int batchsize){
        
        // go into the list, then send an automated message using the person's details. 

    }

    void Candidate::displayText(){
    
        std::cout << "Hello " << std::setw(2) << name << ".  This is to inform you that you have been shortlisted for this job application. Congratulations once again" << std::endl;
    
    }




int main() {

    Candidate Individual("Ibrahim", "2021");
    Individual.DisplayGrade(83);

    /*   generate a list */
    std::vector<std::string> emaillist = {"a@gmail.com", "b@gmail.com", "c@gmail.com", "d@gmail.com"};

     /* generate a grade sheet list */
    std::map<std::string, std::string> gradeSheet;
    gradeSheet.insert(std::pair<std::string, std::string>("Candidate A ","83"));

    gradeSheet.insert(std::pair<std::string, std::string>("Candidate B","92"));
    gradeSheet.insert(std::pair<std::string, std::string>("Candidate C","89"));
    gradeSheet.insert(std::pair<std::string, std::string>("Candidate D","80"));
         
    for(auto i: emaillist)
    {
        std::cout << "Email sent to " << i << std::endl;
    }


    for( std::map<std::string, std::string>::iterator it = gradeSheet.begin();  it !=gradeSheet.end(); it++)
    {
        std::cout << it->first << " => "<< it->second << std::endl;
    }
    
    Individual.displayText();
    
 
    return 0;

}

