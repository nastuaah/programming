﻿
#include <iostream>
#include <string>

/*Task3*/
void fill_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = (rand() % 100) + 1; 
        }
    }
}

void show_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int sum_of_elements(int** arr, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows && i < cols; ++i) {
        sum += arr[i][i];
    }
    return sum;
}

/*Task4*/

struct Employee {
    std::string name;
    int id;
    std::string position;
};

const int maxEmployees = 100;
Employee employees[maxEmployees];
int employeeCount = 0;

void addEmployee() {
    if (employeeCount < maxEmployees) {
        std::cout << "Enter name: ";
        std::cin >> employees[employeeCount].name;
        std::cout << "Enter ID: ";
        std::cin >> employees[employeeCount].id;
        std::cout << "Enter position: ";
        std::cin >> employees[employeeCount].position;
        employeeCount++;
    }
    else {
        std::cout << "Cannot add more employees, maximum reached." << std::endl;
    }
}

void removeEmployee() {
    int targetId;
    std::cout << "Enter the ID of the employee to remove: ";
    std::cin >> targetId;
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == targetId) {
            for (int j = i; j < employeeCount - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            return;
        }
    }
    std::cout << "Employee with ID " << targetId << " not found." << std::endl;
}

void updateEmployeeInfo() {
    int targetId;
    std::cout << "Enter the ID of the employee to update: ";
    std::cin >> targetId;
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == targetId) {
            std::cout << "Enter new name: ";
            std::cin >> employees[i].name;
            std::cout << "Enter new position: ";
            std::cin >> employees[i].position;
            return;
        }
    }
    std::cout << "Employee with ID " << targetId << " not found." << std::endl;
}

void printAllEmployees() {
    std::cout << "Employees in the company:" << std::endl;
    for (int i = 0; i < employeeCount; i++) {
        std::cout << "Name: " << employees[i].name << ", ID: " << employees[i].id << ", Position: " << employees[i].position << std::endl;
    }
}


int main()
{
    /*Task3*/
    srand(time(NULL));
    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of cols: ";
    std::cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    fill_array(arr, rows, cols);
    std::cout << "Array:\n";
    show_array(arr, rows, cols);

    int sum = sum_of_elements(arr, rows, cols);
    std::cout << "Summ of elements on main diagonal: " << sum << std::endl;

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    std::cout << " " << std::endl;
   

    /*Task4*/
    void (*functionPtr[])() = { addEmployee, removeEmployee, updateEmployeeInfo, printAllEmployees };

    while (true) {
        std::cout << "Choose an action:" << std::endl;
        std::cout << "1. Add employee" << std::endl;
        std::cout << "2. Remove employee" << std::endl;
        std::cout << "3. Update employee info" << std::endl;
        std::cout << "4. Print all employees" << std::endl;
        std::cout << "5. Exit" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 5) {
            break;
        }
        else if (choice > 0 && choice < 5) {
            (*functionPtr[choice - 1])();
        }
        else {
            std::cout << "Invalid choice, please try again." << std::endl;
        }
    }

    return 0;
}

