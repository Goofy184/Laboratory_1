#include <iostream>
#include <stack>
#include <string>
using namespace std;
// клас, який містить дані про студента
class Student {
public:
    string surname;    // прізвище
    int id;            // ідентифікаційний номер
    double rating;     // рейтинг

    Student(string surname, int id, double rating) {
        this->surname = surname;
        this->id = id;
        this->rating = rating;
    }
};
int main() {
    setlocale(LC_ALL, "Ukrainian");
    stack<Student> students;    // оголошення стеку зі студентами
    // додавання студентів до стеку
    students.push({ "Миколенко", 890123, 82.1 });
    students.push({ "Литвиненко", 901234, 71.2 });
    students.push({ "Захарчук", 102345, 89.6 });
    students.push({ "Ткаченко", 213456, 74.5 });
    students.push({ "Павлюк", 324567, 91.7 });
    students.push({ "Кравченко", 435678, 84.3 });
    string surname_to_remove = "Ткаченко";
    while (!students.empty() && students.top().surname != surname_to_remove) {
        students.pop();
        cout << "Surname: " << students.top().surname << endl;
        cout << "ID: " << students.top().id << endl;
        cout << "Rating: " << students.top().rating << endl; 
    }
    if (!students.empty()) {
        students.pop();  // видаляємо студента з заданим прізвищем
    }
    return 0;
}
