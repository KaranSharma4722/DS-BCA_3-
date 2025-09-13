#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    int rank;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Rank: ";
        cin >> rank;
    }

    void display() const {
        cout << "Roll Number: " << rollNumber << ", Rank: " << rank << endl;
    }
};

// Function to display top 3 students
void displayTop3(Student students[], int n) {
    cout << "\nTop 3 Ranks:\n";
    for (int i = 0; i < 3 && i < n; i++) {
        cout << "Rank " << students[i].rank << " => Roll Number: " << students[i].rollNumber << endl;
    }
}

// a) Selection Sort by rank
void selectionSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].rank < arr[minIdx].rank)
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

// b) Insertion Sort by rank
void insertionSort(Student arr[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].rank > key.rank) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int n = 10;
    Student students[n];

    cout << "Enter details for 10 students:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        students[i].input();
    }

    // Copies for both sorting techniques
    Student selectionSorted[n], insertionSorted[n];
    for (int i = 0; i < n; i++) {
        selectionSorted[i] = students[i];
        insertionSorted[i] = students[i];
    }

    // Selection Sort
    selectionSort(selectionSorted, n);
    cout << "\nTop 3 using Selection Sort:";
    displayTop3(selectionSorted, n);

    // Insertion Sort
    insertionSort(insertionSorted, n);
    cout << "\nTop 3 using Insertion Sort:";
    displayTop3(insertionSorted, n);

    return 0;
}
