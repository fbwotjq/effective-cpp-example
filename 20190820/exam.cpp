//
// Created by jaco.ryu on 2019-08-20.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

class ClassScore {
private:
    string className;
    int score;
public:
    void setClassName(string className) {
        this->className = className;
    }
    string getClassName() {
        return this->className;
    }
    void setScore(int score) {
        this->score = score;
    }
    int getScore() {
        return this->score;
    }
};

class Student {
private:
    string name;
    vector<ClassScore> classScores;
public:
    void addClassScore(ClassScore classScore) {
        classScores.push_back(classScore);
    }
    vector<ClassScore> getClassScores() const {
        return this->classScores;
    }
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};

int main() {

    string input;
    cout << "과목을 입력하세요 ex>수학,과학,영어" << endl;
    getline(cin, input);

    stringstream classesString(input);

    string className;
    vector<string> classNames;
    while(getline(classesString, className, ',')) {
        classNames.push_back(className);
    }

    vector<Student> students;

    while(true) {

        cout << "학생의 이름을 입력해주세요" << endl;
        string name;
        cin >> name;
        Student student;
        student.setName(name);

        for ( int i = 0 ; i < classNames.size() ; i++ ) {
            cout << classNames.at(i) << " 점수를 입력해주세요" << endl;
            int currentScore = 0;
            cin >> currentScore;
            ClassScore classScore;
            classScore.setClassName(classNames.at(i));
            classScore.setScore(currentScore);
            student.addClassScore(classScore);
        }
        students.push_back(student);

        cout << "학생 성적을 추가 입력할까요?" << endl;
        string isContinueInput;
        cin >> isContinueInput;
        if(isContinueInput == "n") break;

    }

    sort(students.begin(), students.end(), [](const Student & before, const Student & after) -> bool
    {
        int beforeScoresTotal = 0;
        for (auto& score : before.getClassScores())
            beforeScoresTotal += score.getScore();

        int afterScoresTotal = std::accumulate(after.getClassScores().begin(), after.getClassScores().end(), 0, [](const int& sum, ClassScore & classScore){
            return sum + classScore.getScore();
        });

        return beforeScoresTotal > afterScoresTotal;
    });

    cout << "지금까지 입력한 결과를 출력합니다." << endl;
    //for ( int i = 0 ; i < students.size() ; i++ ) {
        //Student currentStudent = students.at(i);
    //}
    for(auto& currentStudent : students) {
        vector<ClassScore> currentStudentScores = currentStudent.getClassScores();

        cout << "학생 이름 : " <<  currentStudent.getName() << " ==> ";
        int totalScore = 0;
        for ( int j = 0 ; j < currentStudentScores.size() ; j++ ) {
            ClassScore currentClassScore = currentStudentScores.at(j);
            cout << currentClassScore.getClassName() << ": ";
            cout << currentClassScore.getScore() << ", ";
            totalScore += currentClassScore.getScore();
        }
        cout << "총점 : " << totalScore << endl;
    }

}

