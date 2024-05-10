#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Faculty {
    string name;
    int backlog;


    Faculty(string n, int b) : name(n), backlog(b) {}
};

int main() {

    vector<Faculty> faculties;


    faculties.push_back(Faculty("Faculty 1", 10));
    faculties.push_back(Faculty("Faculty 2", 5));
    faculties.push_back(Faculty("Faculty 3", 8));
    faculties.push_back(Faculty("Faculty 4", 3));
    faculties.push_back(Faculty("Faculty 5", 12));


    cout << "Full information about faculties:" << endl;
    for (const auto& faculty : faculties) {
        cout << "Faculty: " << faculty.name << ", Backlog: " << faculty.backlog << endl;
    }


    int maxBacklog = faculties[0].backlog;
    string maxBacklogFaculty = faculties[0].name;
    for (const auto& faculty : faculties) {
        if (faculty.backlog > maxBacklog) {
            maxBacklog = faculty.backlog;
            maxBacklogFaculty = faculty.name;
        }
    }
    cout << "Faculty with the maximum backlog: " << maxBacklogFaculty << " (" << maxBacklog << ")" << endl;


    int minBacklog = faculties[0].backlog;
    string minBacklogFaculty = faculties[0].name;
    for (const auto& faculty : faculties) {
        if (faculty.backlog < minBacklog) {
            minBacklog = faculty.backlog;
            minBacklogFaculty = faculty.name;
        }
    }
    cout << "Faculty with the minimum backlog: " << minBacklogFaculty << " (" << minBacklog << ")" << endl;

    return 0;
}
