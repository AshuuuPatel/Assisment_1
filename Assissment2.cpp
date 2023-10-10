#include <iostream>
#include <string>
using namespace std;

const int MAX_LECTURES = 10; // Maximum number of lectures per lecturer

class Lecture
{
public:
    Lecture(string lecturer_name, string subject_name, string course_name, int num_lectures)
        : lecturer_name(lecturer_name), subject_name(subject_name), course_name(course_name), num_lectures(num_lectures)
    {
        lecture_numbers = new int[MAX_LECTURES];
        lecture_dates = new std::string[MAX_LECTURES];
        lecture_times = new std::string[MAX_LECTURES];
        lecture_count = 0;
    }

    ~Lecture()
    {
        delete[] lecture_numbers;
        delete[] lecture_dates;
        delete[] lecture_times;
    }

    void addLecture(int lecture_number, string date, string time)
    {
        if (lecture_count < MAX_LECTURES)
        {
            lecture_numbers[lecture_count] = lecture_number;
            lecture_dates[lecture_count] = date;
            lecture_times[lecture_count] = time;
            lecture_count++;
        }
        else
        {
            cout << "Maximum number of lectures reached for " << lecturer_name << endl;
        }
    }

    void displayDetails()
    {
        cout << "Lecturer Name: " << lecturer_name << endl;
        cout << "Subject Name: " << subject_name << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Number of Lecturers: " << num_lectures << endl;
        cout << "Lecture Details:" << endl;
        for (int i = 0; i < lecture_count; i++)
        {
            cout << "Lecture Number: " << lecture_numbers[i] << endl;
            cout << "Date: " << lecture_dates[i] << endl;
            cout << "Time: " << lecture_times[i] << endl;
            cout << "--------------------" << endl;
        }
    }

private:
    string lecturer_name;
    string subject_name;
    string course_name;
    int num_lectures;
    int *lecture_numbers;
    string *lecture_dates;
    string *lecture_times;
    int lecture_count;
};

int main()
{
    Lecture lecturer1("Ashish Patel", "Computer Science", "Java Programming", 5);
    Lecture lecturer2("Jhanvi Patel", "Mathematics", "Calculus", 4);
    Lecture lecturer3("Dhaval Bhatti", "Physics", "Quantum Mechanics", 6);
    Lecture lecturer4("Darshan", "Web Development", "React", 7);
    Lecture lecturer5("Dipak", "App Development", "Android", 8);

    lecturer1.addLecture(1, "2023-10-05", "10:00 AM");
    lecturer2.addLecture(2, "2023-10-12", "10:00 AM");
    lecturer3.addLecture(1, "2023-10-06", "9:00 AM");
    lecturer4.addLecture(1, "2023-10-07", "2:00 PM");
    lecturer5.addLecture(2, "2023-10-14", "2:00 PM");

    lecturer1.displayDetails();
    lecturer2.displayDetails();
    lecturer3.displayDetails();
    lecturer4.displayDetails();
    lecturer5.displayDetails();

    return 0;
}
