#include <iostream>
#include <string>

using namespace std;

struct Faculty {
    string name;
    int backlog;

    Faculty(string n, int b) : name(n), backlog(b) {}
};

int main() {
    // Оскільки не можна використовувати vector, використовуємо масив
    const int numFaculties = 5;
    Faculty faculties[numFaculties] = {
        Faculty("Faculty 1", 10),
        Faculty("Faculty 2", 5),
        Faculty("Faculty 3", 8),
        Faculty("Faculty 4", 3),
        Faculty("Faculty 5", 12)
    };

    cout << "Full information about faculties:" << endl;
    for (int i = 0; i < numFaculties; ++i) {
        cout << "Faculty: " << faculties[i].name << ", Backlog: " << faculties[i].backlog << endl;
    }

    int maxBacklog = faculties[0].backlog;
    string maxBacklogFaculty = faculties[0].name;
    for (int i = 1; i < numFaculties; ++i) {
        if (faculties[i].backlog > maxBacklog) {
            maxBacklog = faculties[i].backlog;
            maxBacklogFaculty = faculties[i].name;
        }
    }
    cout << "Faculty with the maximum backlog: " << maxBacklogFaculty << " (" << maxBacklog << ")" << endl;

    int minBacklog = faculties[0].backlog;
    string minBacklogFaculty = faculties[0].name;
    for (int i = 1; i < numFaculties; ++i) {
        if (faculties[i].backlog < minBacklog) {
            minBacklog = faculties[i].backlog;
            minBacklogFaculty = faculties[i].name;
        }
    }
    cout << "Faculty with the minimum backlog: " << minBacklogFaculty << " (" << minBacklog << ")" << endl;

    return 0;
}
