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
        int n;
        cout<<"Enter the number of student:"<<endl;
        cin>>n;
        Student **array=new Student*[n];
            for(int i=0;i<n;i++)
            {   
                string studentName;
                string studentId;
                float mtaScore;
                float esaScore;
                cout<<"Enter the student details:"<<i+1<<endl;

                cout<<"Enter the studentName:"<<endl;
                cin>>studentName;

                cout<<"Enter the studentID:"<<endl;
                cin>>studentId;

                cout<<"Enter the mtaScore:"<<endl;
                cin>>mtaScore;

                cout<<"Enter the esaScore:"<<endl;
                cin>>esaScore;

                array[i]=new Student(studentName,studentId,mtaScore,esaScore);


            }
            cout<<"Print all the details of the student:"<<endl;
                for(int i=0;i<n;i++)
                {
                    array[i]->printResult();
                }

    return 0;    
    }