//
// Created by 张腾 on 2023/10/11.
// 结构体实践
//
#include<string>
#include<iostream>
using namespace std;

struct student{
    //学生姓名
    string name;
    //学生分数
    int score;
};

struct teacher{
    //教师的姓名
    string name;
    //教师的学生
    student myStudents[5];
};

void setTeacher(teacher* tPointer){
    string name[]={"a","b","c","d","e"};
    for (int i =0; i<3; i++){
        tPointer->name = "teacher "+name[i];
        for (int i=0; i<5; i++){
            tPointer->myStudents[i].name = "sutdent "+name[i];
            tPointer->myStudents[i].score = 100;
        }
        tPointer++;
    }
}

int main(){
    teacher teacherList[3];
    teacher* tPointer = teacherList;
    setTeacher(tPointer);

    for (int i = 0; i < 3; i++) {
        cout <<  teacherList[i].name << endl;
        for (int j=0; j<5; j++){
            cout <<teacherList[i].myStudents[j].name<<endl;
            cout <<teacherList[i].myStudents[j].score<<endl;
        }

    }


    return 0;

}

