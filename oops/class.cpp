#include<iostream>
using namespace std;

    class Student
    {
        private:
            string studentName;
            string studentID;
            float mtaScore;
            float esaScore;

        public:
            Student(string studentName,string studentID,float mtaScore,float esaScore)
            {
                this->studentName=studentName;
                this->studentID=studentID;
                this->mtaScore=mtaScore;
                this->esaScore=esaScore;


            }
        ~Student()
        {
            cout<<"Deleted studntName:"<<studentName<<endl;

        }
    void printResult()
    {
        cout<<"Name:"<<studentName<<endl;
        cout<<"ID:"<<studentID<<endl;
        cout<<"Score:"<<mtaScore<<endl;
        cout<<"Score:"<<esaScore<<endl;
    }

    };
    int main()
    {
        Student st1("Umesh","221003003081",20,78);
        Student st2("Pradip","221003003169",12,58);
        st1.printResult();
        st2.printResult();
        Student *st3=new Student("Sayan","221003003056",12,45);
        st3->printResult();
        delete st3;


        
    }