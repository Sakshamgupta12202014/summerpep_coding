#include <bits/stdc++.h>

using namespace std;

bool solve(int n) {

    if(n == 1) return false;

    // check prime 
    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimeInRange(int st, int end) {

    // find all prime numbers in a range 
    for(int i=st; i<=end; i++) {
        // take each number and check whether it is prime or not

        bool isPrime = true;
        for(int j=2; j<i; j++) {
            if(i%j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << i << " ";
        }
    }
}

void checkPalindrome(int n) {

    // check whether a number is a palindrome
    int num = n;

    int rev_num = 0;
    while(n > 0) {
        int dig = n % 10;
        n = n / 10;

        rev_num = rev_num * 10 + dig;
    }
    if(num == rev_num) cout << "The number is Palindrome" << endl;
    else cout << " The Number is Not A palindrome" << endl;

}

// void s(int i, int len) {

//     if(i>)
//     s(i+1, len+1);
// }

void findLenOfString(string str, int len) {

}

void convertCase(string str) {

    string res = "";
    for(int i=0; i<str.length(); i++) {

        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    cout << "String after inverting the Cases :- " << str;
}

void revStringByWords(string str) {

    string rev = "";
    stack<string> st;

    string word = "";
    for(int i=0; i<str.length(); i++) {
        if(str[i] != ' '){
            word.push_back(str[i]);
        }
        else{
            st.push(word);
            word = "";
        }
    }

    if(word!="") {
        st.push(word);
    }

    while(!st.empty()) {
        rev += st.top();
        st.pop();
        rev+=" ";
    }

    cout << "Ans :- " << rev << endl;
}

void checkStrengthOfPassword() {

    // check the strongnes of password

}

struct sms {
    
    int roll_no;
    float marks;

};

void func(bool val) {

    if(val) {
        cout << "if statement executed " << endl;
        func(false);
    }else{
        cout << "else statement executed" << endl;
    }
}


int main() {

    // int n;
    // cout << "Enter number ";
    // cin >> n;

    // bool res = solve(n);
    // if(res) cout << "The number is prime" << endl;
    // else cout << "Not a prime number" << endl;

    // int st = 2;
    // int end = 40;

    // findPrimeInRange(st, end);

    // checkPalindrome(32453);

    // convertCase("AbCdEf");

    // revStringByWords("Lovely @ Professional University");

    // menu driven program for student management system 

    // func(true);

    bool val = true;
    do {
        if(val) {
            cout << "If" << endl;
            val = false;
        }
        else{
            cout << "else" << endl;
            break;
        }
    }while(!val);
    return 0;
}


// struct Subject {
//     string name;
//     float marks;
// };

// struct Student {
//     string name;
//     int rollNo;
//     vector<Subject> subjects;
// };

// // Function prototypes
// void addStudent(vector<Student>& students);
// void deleteStudent(vector<Student>& students);
// void updateStudent(vector<Student>& students);
// void displayStudents(const vector<Student>& students);

// int main() {
//     vector<Student> students;
//     int choice;

//     do {
//         cout << "\n====== University Management System ======\n";
//         cout << "1. Add Student\n";
//         cout << "2. Delete Student\n";
//         cout << "3. Update Student\n";
//         cout << "4. Display Students\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch(choice) {
//             case 1: addStudent(students); break;
//             case 2: deleteStudent(students); break;
//             case 3: updateStudent(students); break;
//             case 4: displayStudents(students); break;
//             case 5: cout << "Exiting...\n"; break;
//             default: cout << "Invalid choice! Try again.\n";
//         }
//     } while(choice != 5);

//     return 0;
// }

// // Add Student
// void addStudent(vector<Student>& students) {
//     Student s;
//     int numSubjects;

//     cout << "Enter Name: ";
//     cin.ignore();
//     getline(cin, s.name);
//     cout << "Enter Roll Number: ";
//     cin >> s.rollNo;
//     cout << "Enter number of subjects: ";
//     cin >> numSubjects;

//     for (int i = 0; i < numSubjects; ++i) {
//         Subject sub;
//         cout << "Enter name of subject " << i + 1 << ": ";
//         cin.ignore();
//         getline(cin, sub.name);
//         cout << "Enter marks for " << sub.name << ": ";
//         cin >> sub.marks;
//         s.subjects.push_back(sub);
//     }

//     students.push_back(s);
//     cout << "Student added successfully!\n";
// }

// // Delete Student
// void deleteStudent(vector<Student>& students) {
//     int roll;
//     cout << "Enter Roll Number to delete: ";
//     cin >> roll;

//     for (auto it = students.begin(); it != students.end(); ++it) {
//         if (it->rollNo == roll) {
//             students.erase(it);
//             cout << "Student deleted successfully!\n";
//             return;
//         }
//     }
//     cout << "Student with Roll No. " << roll << " not found.\n";
// }

// // Update Student
// void updateStudent(vector<Student>& students) {
//     int roll;
//     cout << "Enter Roll Number to update: ";
//     cin >> roll;

//     for (auto& s : students) {
//         if (s.rollNo == roll) {
//             int numSubjects;
//             cout << "Enter new Name: ";
//             cin.ignore();
//             getline(cin, s.name);
//             cout << "Enter number of subjects: ";
//             cin >> numSubjects;

//             s.subjects.clear();
//             for (int i = 0; i < numSubjects; ++i) {
//                 Subject sub;
//                 cout << "Enter name of subject " << i + 1 << ": ";
//                 cin.ignore();
//                 getline(cin, sub.name);
//                 cout << "Enter marks for " << sub.name << ": ";
//                 cin >> sub.marks;
//                 s.subjects.push_back(sub);
//             }

//             cout << "Student updated successfully!\n";
//             return;
//         }
//     }
//     cout << "Student with Roll No. " << roll << " not found.\n";
// }

// // Display All Students
// void displayStudents(const vector<Student>& students) {
//     if (students.empty()) {
//         cout << "No student records available.\n";
//         return;
//     }

//     cout << "\n--- Student Records ---\n";
//     for (const auto& s : students) {
//         cout << "Name: " << s.name << ", Roll No: " << s.rollNo << "\n";
//         cout << "Subjects & Marks:\n";
//         for (const auto& sub : s.subjects) {
//             cout << "  - " << sub.name << ": " << sub.marks << "\n";
//         }
//         cout << "-------------------------\n";
//     }
// }
