// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Employee.h"

using namespace std;

int main(int argc, char** argv)
{
    if (argc == 1) {
        cout << "You forgot the command line parameter" << endl;
        exit(0);
    }

    ifstream ifs;
    ifs.open(argv[1], ios::in);
    if (!ifs) {
        cout << "could not find file " << argv[1] << endl;
        exit(0);
    }

    string yi;
    getline(ifs, yi);
    int n = stoi(yi);

    vector<Employee> syainhyo;

    for (int i = 0; i < n; i++) {
        string name;
        int id;
        int age;
        string job;
        int year;
        getline(ifs, name, '|');
        getline(ifs, yi, '|');
        id = stoi(yi);
        getline(ifs, yi, '|');
        age = stoi(yi);
        getline(ifs, job, '|');
        getline(ifs, yi);
        year = stoi(yi);

        Employee syachiku = Employee(name, id, age, job, year);

        syainhyo.push_back(syachiku);
    }

    /*for (auto p : syainhyo) {
        p->pirntState();
    }*/

    string txt = argv[1];
    int compariosn = 0;
    for (int i = 0; i <= syainhyo.size()-1; i++) {//Buble Sort //loop size-1 times // O(n^2)
        for (int j = syainhyo.size() - 1; j >= i + 1; j--) { // after compare go down 
            compariosn++;
            if (syainhyo[j].getId() < syainhyo[j-1].getId()) {// change the id when that is smaller 
                swap(syainhyo[j], syainhyo[j - 1]);
                if(txt == "small.txt"){//only show the consle when that is small.txt
                    for (int k = 0; k < syainhyo.size(); k++) {//pritn out ID
                        cout << syainhyo[k].getId() << " ";
                    }
                    cout << "\n";
                }
                
            }
        }
    }


    

    
    
    
        //syainhyo[high].printResult();
        //cout << "at index " << high << " after " << comparison << " comparisons." << endl;
        //goukei += comparison;
    

    cout << "It tooks " << compariosn << " comparisons to sort the list." << endl; // the average 

    ofstream ofs;
    ofs.open("C:/Users/Jhin/source/repos/BubbleSort/BubbleSort/output.txt");
    ofs << "This is BubbleSort output file. TY \n";
    for (auto p : syainhyo) {
        ofs << p.getName() << " | " << p.getId() << " | " << p.getAge() << " | " << p.getJob() << " | " << p.getYear() << endl;
    }
    ofs.close();


}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
