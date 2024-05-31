#include <iostream>
#include <string>
#include <array>
using namespace std;
 typedef struct {
        string name;
        char sex;
        int group;
        int id;
        array<int,8> grades;
    } student;
string iGenerationMan(){
    string name;
    int start = 0;
    int end = 10;
    int number = rand() % (end - start) + start;
    switch (number){
        case 0: name="Ivan";
        break;
        case 1: name="Petr";
        break;
        case 2: name="Oleg";
        break;
        case 3: name="Dmitriy";
        break;
        case 4: name="Nikita";
        break;
        case 5: name="Stepan";
        break;
        case 6: name="Svyatoslav";
        break;
        case 7: name="Vladislav";
        break;
        case 8: name="Vladimir";
        break;
        case 9: name="Egor";
        break;
    }
    return name;
}
string iGenerationWoman(){
    string name;
    int start = 0;
    int end = 10;
    int number = rand() % (end - start) + start;
    switch (number){
        case 0: name="Marya";
        break;
        case 1: name="Anastasiya";
        break;
        case 2: name="Anna";
        break;
        case 3: name="Vasilisa";
        break;
        case 4: name="Alina";
        break;
        case 5: name="Olga";
        break;
        case 6: name="Arina";
        break;
        case 7: name="Darya";
        break;
        case 8: name="Svetlana";
        break;
        case 9: name="Victoria";
        break;
    }
    return name;
}
string fGenerationMan(){
    string name;
    int start = 0;
    int end = 10;
    int number = rand() % (end - start) + start;
    switch (number){
        case 0: name="Ivanov";
        break;
        case 1: name="Petrov";
        break;
        case 2: name="Sidorov";
        break;
        case 3: name="Kuznetcov";
        break;
        case 4: name="Popov";
        break;
        case 5: name="Vinogradov";
        break;
        case 6: name="Maksimov";
        break;
        case 7: name="Olegov";
        break;
        case 8: name="Egorov";
        break;
        case 9: name="Chirtsov";
        break;
    }
    return name;
}string fGenerationWoman(){
    string name;
    int start = 0;
    int end = 10;
    int number = rand() % (end - start) + start;
    switch (number){
        case 0: name="Ivanova";
        break;
        case 1: name="Petrova";
        break;
        case 2: name="Sidorova";
        break;
        case 3: name="Popova";
        break;
        case 4: name="Vinogradova";
        break;
        case 5: name="Kuznetcova";
        break;
        case 6: name="Maksimova";
        break;
        case 7: name="Olegova";
        break;
        case 8: name="Egorova";
        break;
        case 9: name="Chirtsova";
        break;
    }
    return name;
}
string oGenerationMan(){
    string name;
    int start = 0;
    int end = 10;
    int number = rand() % (end - start) + start;
    switch (number){
        case 0: name="Ivanovich";
        break;
        case 1: name="Petrovich";
        break;
        case 2: name="Andreevich";
        break;
        case 3: name="Nikolaevich";
        break;
        case 4: name="Denisovich";
        break;
        case 5: name="Svyatoslavovich";
        break;
        case 6: name="Dmitrievich";
        break;
        case 7: name="Vladislavovich";
        break;
        case 8: name="Vladimirovich";
        break;
        case 9: name="Egorovich";
        break;
    }
    return name;
}
string oGenerationWoman(){
    string name;
    int start = 0;
    int end = 10;
    int number = rand() % (end - start) + start;
    switch (number){
        case 0: name="Ivanovna";
        break;
        case 1: name="Petrovna";
        break;
        case 2: name="Andreevna";
        break;
        case 3: name="Nikolaevna";
        break;
        case 4: name="Denisovna";
        break;
        case 5: name="Svyatoslavovna";
        break;
        case 6: name="Vladimirovna";
        break;
        case 7: name="Vladislavovna";
        break;
        case 8: name="Dmitrievna";
        break;
        case 9: name="Egorovna";
        break;
    }
    return name;
}
string fio(string familia, string imya, string otchestvo){
    string name;
    name.append(familia).append(" ").append(imya).append(" ").append(otchestvo);
    return name;
}
array<int,8> rGrades(){
    array<int,8> grades;
    int start = 3;
    int end = 5;
    for (int i=0; i<8; i++){
        grades[i]=rand() % (end - start + 1) + start;
    }  
    return grades;
}
void showStudents(student allStudents[], int amount) {
    for (int i = 0; i < amount; ++i) {
        cout << "Student name: " << allStudents[i].name << endl;
        cout << "Student sex: " << allStudents[i].sex << endl;
        cout << "Student group: " << allStudents[i].group << endl;
        cout << "Student id: " << allStudents[i].id << endl;
        cout << "Student grades: ";
        for (int j = 0; j < 8; ++j) {
            cout << allStudents[i].grades[j] << " ";
        }
        cout << endl << endl;
    }
}
void addStudent(student allStudents[], int &amount) {
    student newStudent;
    string name1, name2, name3;
    cout << "Enter student surname: ";
    cin >> name1;

    cout << "Enter student name: ";
    cin >> name2;

    cout << "Enter student otchestvo: ";
    cin >> name3;

    newStudent.name=fio(name1, name2, name3);

    cout << "Enter student sex: ";
    cin >> newStudent.sex;
    
    cout << "Enter Student group: ";
    cin >> newStudent.group;
    
    cout << "Enter student id: ";
    cin >> newStudent.id;
    
    cout << "Enter student grades (8 pieces): ";
    for (int i = 0; i < 8; i++) {
        cin >> newStudent.grades[i];
    }
    
    allStudents[amount] = newStudent;
    amount++;
}
void changeStudent(student& student) {
    string name1, name2, name3;
    cout << "Enter student surname: ";
    cin >> name1;

    cout << "Enter student name: ";
    cin >> name2;

    cout << "Enter student otchestvo: ";
    cin >> name3;

    student.name=fio(name1, name2, name3);

    cout << "Enter student sex: ";
    cin >> student.sex;

    cout << "Enter student group: ";
    cin >> student.group;

    cout << "Enter student id: ";
    cin >> student.id;

    cout << "Enter student grades(8 pieces): ";
    for (int i = 0; i < 8; ++i) {
        cin >> student.grades[i];
    }
}
void showStudentsGroupN(student allStudents[], int amount) {
    int group;
    cout << "Enter student's group: ";
    cin >> group;
    for (int i = 0; i < amount; i++) {
        if (allStudents[i].group == group) {
            cout << "Student name: " << allStudents[i].name << endl;
            cout << "Student sex: " << allStudents[i].sex << endl;
            cout << "Student group: " << allStudents[i].group << endl;
            cout << "Student id: " << allStudents[i].id << endl;
            cout << "Student grades: ";
            for (int j = 0; j < 8; j++) {
                cout << allStudents[i].grades[j] << " ";
            }
            cout << endl << endl;
        }
    }
}
void showTopStudents(student allStudents[], int amount) {
    float maxAverageGrade = 0;
    for (int i = 0; i < amount; ++i) {
        float avg = 0;
        for (int j = 0; j < 8; ++j) {
            avg += allStudents[i].grades[j];
        }
        avg /= 8;
        if (avg > maxAverageGrade) {
            maxAverageGrade = avg;
        }
    }
    
    cout << "Students with the best grades:" << endl;
    for (int i = 0; i < amount; ++i) {
        float avg = 0;
        for (int j = 0; j < 8; ++j) {
            avg += allStudents[i].grades[j];
        }
        avg /= 8;
        
        if (avg == maxAverageGrade) {
            cout << "Student name: " << allStudents[i].name << endl;
            cout << "Student sex: " << allStudents[i].sex << endl;
            cout << "Student group: " << allStudents[i].group << endl;
            cout << "Student id: " << allStudents[i].id << endl;
            cout << "Student grades: ";
            for (int j = 0; j < 8; j++) {
                cout << allStudents[i].grades[j] << " ";
            }
            cout << endl;
            cout << "GPA: " << avg << endl;
            cout << endl;
        }
    }
}
void showStudentsSex(student allStudents[], int amount) {
    int numMen = 0;
    int numWomen = 0;
    for (int i = 0; i < amount; i++) {
        if (allStudents[i].sex == *"M") {
            numMen++;
        }
        else {
            numWomen++;
        }
    }
    cout << "Number of men: " << numMen << endl << "Number of women: " << numWomen <<endl; 
}
void showStudentsGrades(student allStudents[], int amount) {
    cout << "Students without scholarship: " << endl << endl;
    for (int i = 0; i < amount; ++i) {
        bool index = true;
        for (int j = 0; j < 8; ++j) {
            if (allStudents[i].grades[j] <= 3){
                index = false;
                break;
            }
        }
            if (!index){
                cout << "Student name: " << allStudents[i].name << endl;
                cout << "Student sex: " << allStudents[i].sex << endl;
                cout << "Student group: " << allStudents[i].group << endl;
                cout << "Student id: " << allStudents[i].id << endl;
                cout << "Student grades: ";
            for (int k = 0; k < 8; k++) {
                cout << allStudents[i].grades[k] << " ";
            }
            cout << endl << endl;
        }
    }
    cout << "Students achieving only " << "\"" << "good" << "\"" << " and " << "\"" << "excellent" << "\"" << " grades: " << endl << endl;
    for (int i = 0; i < amount; ++i) {
        bool indexGenius = true;
        int indexLegend = 0;
        for (int j = 0; j < 8; ++j) {
            if (allStudents[i].grades[j] <= 3){
                indexGenius = false;
                break;
            }
            if (allStudents[i].grades[j] == 5){
                indexLegend++;
            }
        }
            if (indexGenius && indexLegend != 8){
                cout << "Student name: " << allStudents[i].name << endl;
                cout << "Student sex: " << allStudents[i].sex << endl;
                cout << "Student group: " << allStudents[i].group << endl;
                cout << "Student id: " << allStudents[i].id << endl;
                cout << "Student grades: ";
            for (int j = 0; j < 8; j++) {
                cout << allStudents[i].grades[j] << " ";
            }
            cout << endl << endl;
            }
        }
    cout << "Students achieving only " << "\"" << "excellent" << "\"" << " grades: " << endl << endl;
    for (int i = 0; i < amount; ++i) {
        bool indexLegend1 = 0;
        for (int j = 0; j < 8; ++j) {
            if (allStudents[i].grades[j] != 5){
                indexLegend1 = false;
                break;
            }
        }
            if (indexLegend1){
                cout << "Student name: " << allStudents[i].name << endl;
                cout << "Student sex: " << allStudents[i].sex << endl;
                cout << "Student group: " << allStudents[i].group << endl;
                cout << "Student id: " << allStudents[i].id << endl;
                cout << "Student grades: ";
            for (int j = 0; j < 8; j++) {
                cout << allStudents[i].grades[j] << " ";
            }
            cout << endl << endl;
            }
        }
}
void showStudentsGroupNumberK(student allStudents[], int amount) {
    int groupNumber;
    cout << "Enter student's id: ";
    cin >> groupNumber;

    for (int i = 0; i < amount; i++) {
        if (allStudents[i].id == groupNumber) {
            cout << "Student name: " << allStudents[i].name << endl;
            cout << "Student sex: " << allStudents[i].sex << endl;
            cout << "Student group: " << allStudents[i].group << endl;
            cout << "Student id: " << allStudents[i].id << endl;
            cout << "Student grades: ";
            for (int j = 0; j < 8; j++) {
                cout << allStudents[i].grades[j] << " ";
            }
            cout << endl << endl;
        }
    }
}
int main(){
    int amount=100;
    student allStudents[amount+10];
    for (int i=0; i<amount; i++){
        string name;
        char sex;
        if (i%2==0){
            name=fio(fGenerationMan(), iGenerationMan(), oGenerationMan());
            sex='M';
        }
        else{
            name=fio(fGenerationWoman(), iGenerationWoman(), oGenerationWoman());
            sex='W';
        } 
        int group;
        int id;
        if (i<amount/4){
            group=3372;
            id=i+1;
        }
        if (1<=i/(amount/4) && i/(amount/4)<2){
            group=3373;
            id=i+1-amount/4;
        }
        if (2<=i/(amount/4) && i/(amount/4)<3){
            group=3374;
            id=i+1-(amount/4)*2;
        }
        if (i/(amount/4)<4 && 3<=i/(amount/4)){
            group=3375;
            id=i+1-(amount/4)*3;
        }
        array<int,8> grades;
        grades=rGrades();
        allStudents[i]={name, sex, group, id, grades};
    }
    int item = 1;
    while (item !=0){
        cout << "Choose an item: " << endl <<
        "1. Adding new student." << endl <<
        "2. Changing an existing entry." << endl <<
        "3. Displaying data of all students." << endl <<
        "4. Displaying data of all students in a certain group N." << endl <<
        "5. Displaying data of students with the highest grades." << endl <<
        "6. Displaying the number of men and women." << endl <<
        "7. Displaying data on student grades." << endl <<
        "8. Displaying data of students in a certain id K." << endl <<
        "0. End of program." << endl;
    cin >> item;
    switch (item) {
        case 1: addStudent(allStudents, amount);
        break;
        
        case 2: cout << "Enter student's number" << endl;
        int number;
        cin >> number;
        changeStudent(allStudents[number-1]);
        break;

        case 3: showStudents(allStudents, amount);
        break;
        
        case 4: showStudentsGroupN(allStudents, amount);
        break;

        case 5: showTopStudents(allStudents, amount);
        break;

        case 6: showStudentsSex(allStudents, amount);
        break;

        case 7: showStudentsGrades(allStudents, amount);
        break;

        case 8: showStudentsGroupNumberK(allStudents, amount);
        break;

        case 0: 
        break;

        default:
        cout << "Error! Try again.";
    }
    }
    return 0;
}