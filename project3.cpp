 // ============================= Student Record Management Project ============================

 #include <iostream>
 #include <fstream>
 #include <string>
 #include <conio.h>
 using namespace std;

int ID;    // for global use, it will be auto generated ID

// create Student class to manage data of student
class Student
{
    public:
        int id, age;
        string name, stream;

        void addStudent();
        void printAllStudents();
        void print();
        void searchStudent(int id);
        void deleteStudent(int id); 
        void updateStudent(int id);
};

// Defining addStudent function
void Student::addStudent()
{
    cout << "Enter student name: ";
    fflush(stdin);    // for clear buffer
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student stream: ";
    cin >> stream;
    ID++;

    // create ofstream object fout, which can use for file opening and data writing
    ofstream fout;

    // open in append mode because may be in the file already data exist
    fout.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/Student.txt", ios::app);

    fout << "\n" << ID;
    fout << "\n" << name;
    fout << "\n" << age;
    fout << "\n" << stream;

    fout.close();   // close file

    // create another file for storing only id
    fout.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/StudentId.txt", ios::app);
    fout << "\n" << ID;  // write only id in the file
    fout.close();       // close file

    cout << endl << "Record added successfully" << endl;
    cout << "Press any key...";
    getch();        // for 1 character input or hold screen
    system("cls"); // for screen clear
}

// define printAllStudents function
void Student::printAllStudents()
{
    ifstream fin;
    fin.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/Student.txt");
    Student s;
    while (!fin.eof())  // // The file will be read until my file is at the end of the file
    {
        fin >> s.id;
        fin.ignore();
        getline(fin, s.name);
        fin >> s.age;
        fin >> s.stream;

        s.print();  // in this function 1 time, 1 object detail will be printed
    }    
    fin.close();   //  close fin object 
}

// define void print function to print student details
void Student::print()
{
    cout << "Id     =   " << id << endl;
    cout << "Name   =   " << name << endl;
    cout << "Age    =   " << age << endl;
    cout << "Stream =   " << stream << endl;
    cout << "=========================================" << endl;
}

// define searchStudent function by passing student id
void Student::searchStudent(int id)
{
    ifstream fin;
    fin.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/Student.txt");
    Student s;
    while (!fin.eof())  // The file will be read until my file is at the end of the file
    {
        fin >> s.id;
        fin.ignore();
        getline(fin, s.name);
        fin >> s.age;
        fin >> s.stream;

        if (s.id == id)
        {
            s.print();
            break;
        }
    }    
    fin.close();   //  close fin object 
    cout << "Press any key...";
    getch();
    system("cls");
}

// define deleteStudent function by passing student id
void Student::deleteStudent(int id)
{
    ifstream fin;   // create object for reading
    fin.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/Student.txt", ios::app); // old file open in apped mode
    ofstream fout;  // create object for writing
    fout.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/temp.txt", ios::app);   // new file open in append mode

    Student s;
    while (!fin.eof())  // The file will be read until my file is at the end of the file
    {
        fin >> s.id;
        fin.ignore();
        getline(fin, s.name);
        fin >> s.age;
        fin >> s.stream;

        if (s.id != id)
        {
            fout << "\n" << s.id;
            fout << "\n" << s.name;
            fout << "\n" << s.age;
            fout << "\n" << s.stream;
        }
    }

    fin.close();    //  close old file
    fout.close();   //  close in file

    remove("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/Student.txt");
    rename("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/temp.txt", "D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/project3/Student.txt");

    cout << endl << "Record deleted successfully" << endl;
    cout << "Press any key...";
    getch();
    system("cls");
}

// defining updateStudent function by passing student id
void Student::updateStudent(int id)
{
    deleteStudent(id);    
    addStudent();
}

 int main()
 {
    ifstream fin;       // create ifstream object fin, which can use for data read in the file
    fin.open("D:/A Job Ready Bootcamp in C++, DSA and IOT/Projects/StudentId.txt");

    if(!fin)
        cout << "File does'nt exist" << endl;
    else
    {
        while (!fin.eof())  // The file will be read until my file is at the end of the file
        {
            fin >> ID;
        }
    }
    fin.close();    // close file

    int choice;

    while (true)
    {
        cout << "Id : " << ID;
        cout << endl << "1. Add student" << endl;
        cout << "2. Print all students Records" << endl;
        cout << "3. Search a student" << endl;
        cout << "4. Delete a student" << endl;
        cout << "5. Update a student" << endl;
        cout << "6. Exit" << endl;

        cout << endl << "Enter your choice: ";
        cin >> choice;

        Student s;  // create Student class object
        int id; // for search, update and delete Student object

        switch (choice)
        {
        case 1:
            {
                s.addStudent();
                break;
            }
        case 2:
            {
                s.printAllStudents();
                cout << "Press any key...";
                getch();
                system("cls");
                break;
            }
        case 3:
            {
                cout << "Enter student id: ";
                cin >> id;
                s.searchStudent(id);
                break;
            }
        case 4:
            {
                cout << "Enter student id: ";
                cin >> id;
                s.deleteStudent(id);
                break;
            }
        case 5:
            {
                cout << "Enter student id: ";
                cin >> id;
                s.updateStudent(id);
                break;
            }
        case 6:
                exit(0);
        default:
            cout << endl << "Invalid Input";
        }   // close switch case
    }      // close while loop

    getch();    //  for 1 character input or hold console screen
    return 0;
 }             // close main function
