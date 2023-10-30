#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
};

class Student {
private:
    string last_name;
    string first_name;
    string middle_name;
    Date birth_date;
    string home_address;
    string phone_number;
    int* gradesMath;
    int* gradesPhysicalEducation;
    int* gradesChemistry;

public:
    Student(string first, string last) : first_name(first), last_name(last) {
        gradesMath = new int[5]();
        gradesPhysicalEducation = new int[5]();
        gradesChemistry = new int[5]();
    }


    void SetBirthDate(const Date& date) {
        birth_date = date;
    }

    Date GetBirthDate() const {
        return birth_date;
    }

    void SetHomeAddress(const string& address) {
        home_address = address;
    }

    string GetHomeAddress() const {
        return home_address;
    }

    void SetPhoneNumber(const string& phone) {
        phone_number = phone;
    }

    string GetPhoneNumber() const {
        return phone_number;
    }

    void SetLastName(const string& last) {
        last_name = last;
    }

    string GetLastName() const {
        return last_name;
    }

    void AddMathGrade(int subject_index, int grade) {
        if (subject_index >= 0 && subject_index < 5) {
            gradesMath[subject_index] = grade;
        }
    }

    int GetMathGrade(int subject_index) const {
        if (subject_index >= 0 && subject_index < 5) {
            return gradesMath[subject_index];
        }
        return -1;
    }

    void AddPhysicalEducationGrade(int subject_index, int grade) {
        if (subject_index >= 0 && subject_index < 5) {
            gradesPhysicalEducation[subject_index] = grade;
        }
    }

    int GetPhysicalEducationGrade(int subject_index) const {
        if (subject_index >= 0 && subject_index < 5) {
            return gradesPhysicalEducation[subject_index];
        }
        return -1;
    }

    void AddChemistryGrade(int subject_index, int grade) {
        if (subject_index >= 0 && subject_index < 5) {
            gradesChemistry[subject_index] = grade;
        }
    }

    int GetChemistryGrade(int subject_index) const {
        if (subject_index >= 0 && subject_index < 5) {
            return gradesChemistry[subject_index];
        }
        return -1;
    }

    void ShowStudentInfo() const {
        cout << "Фамилия: " << last_name << endl;
        cout << "Имя: " << first_name << endl;
        cout << "Отчество: " << middle_name << endl;
        cout << "Дата рождения: " << birth_date << endl;
        cout << "Домашний адрес: " << home_address << endl;
        cout << "Телефонный номер: " << phone_number << endl;

        cout << "Оценки по математике: ";
        for (int i = 0; i < 5; i++) {
            cout << gradesMath[i] << " ";
        }
        cout << endl;

        cout << "Оценки по физкультуре: ";
        for (int i = 0; i < 5; i++) {
            cout << gradesPhysicalEducation[i] << " ";
        }
        cout << endl;

        cout << "Оценки по химии: ";
        for (int i = 0; i < 5; i++) {
            cout << gradesChemistry[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    setlocale(LC_ALL, "");
    Student student("Антон", "Васильев");

    student.SetBirthDate(Date(2000, 1, 1));
    student.SetHomeAddress("ул. Добровольского, 123");
    student.SetPhoneNumber("+38(097)264-18-54");

    student.AddMathGrade(0, 95);
    student.AddMathGrade(1, 88);

    student.AddPhysicalEducationGrade(0, 85);
    student.AddPhysicalEducationGrade(1, 90);

    student.AddChemistryGrade(0, 75);
    student.AddChemistryGrade(1, 80);

    student.ShowStudentInfo();

    student.SetLastName("Петров");
    student.SetPhoneNumber("+38(097)234-13-24");

    cout << "Измененная фамилия: " << student.GetLastName() << endl;
    cout << "Измененный телефонный номер: " << student.GetPhoneNumber() << endl;

    return 0;
}
