#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class{

public:
    void setID(string IDnum)
    {
        IDnum = IDnum;
    }
    int getID()
    {
            return IDnum;
    }

     void  setName(string name)
    {
        name = name;
    }
    string getName()
    {
            return name;
    }

     void setAge(string age)
    {
        age = age;
    }
    int  getAge()
    {
            return age;
    }

    void setGender(string gender)
    {
        gender = gender;
    }
    string getGender()
    {
            return gender;
    }

     int setScore(int score)
    {
        score = score;
    }
    int getScore()
    {
            return score;
    }

     char setGrade(char grade)
    {
        grade = grade;
    }
    char getGrade()
    {
            return  grade;
    }


private:
    string IDnum;
    string name;
    string age;
    string gender;
    int score;
    char grade;


};



int main()
{








    string data=" ";
    fstream is;
    is.open("message.txt");

        is << "kwame";
        cout << " " <<endl;
        return 0;

}
// A student is defined uniquely by IDnumbers,name,gender,age,score.write a c++ program
// to print from the console and produces the following in a file.

// IDnum  Name   Age  Gender  Score  Grade
// 103345 kwame   43   Male    98     A


//avergae Age:
//Average Score:
//male count:
//female count:
