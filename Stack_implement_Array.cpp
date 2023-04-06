#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Stack_arr {
private:
    int length_of_stack_arr = 0;
    int size_of_stack_arr;
    int* array;
public:
    Stack_arr(int size) {
        size_of_stack_arr = size;
        array = new int[size];
        for (int i = 0; i < size_of_stack_arr; i++) {
            array[i] = -1;
        }
    }
    void Push(int val) {
        if (length_of_stack_arr < size_of_stack_arr) {
            array[length_of_stack_arr] = val;
            length_of_stack_arr++;
            cout << "Value is successfully pushed" << endl;
        }
        else {
            cout << "Stack is full, can't take value" << endl;
        }
    }
    void Pop() {
        if (length_of_stack_arr != 0) {
            cout << array[length_of_stack_arr - 1] << endl;
            array[length_of_stack_arr - 1] = -1;
            length_of_stack_arr--;
        }
        else {
            
            cout << "Stack is already empty" << endl;
        }
    }
    void Top() {
        if (array[length_of_stack_arr - 1] == -1) {
            cout << "NULL Value at top" << endl;
        }
        else {
            cout << array[length_of_stack_arr - 1] << endl;
        }
    }
    void Display() {
        if (length_of_stack_arr == 0) {
            cout << "Empty stack" << endl;
        }
        else {
            for (int i = 0; i < length_of_stack_arr; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
    void isEmpty() {
        if (length_of_stack_arr == 0) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack is not empty" << endl;
        }
    }
    void isFull() {
        if (length_of_stack_arr == size_of_stack_arr) {
            cout << "Stack is full" << endl;
        }
        else {
            cout << "Stack is not full" << endl;
        }
    }
};

int main() {
    int num;
    cin >> num;
    Stack_arr stack(num);
    auto start = high_resolution_clock::now();
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Display();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Display();
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Push(rand() % 100);
    stack.Display();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << " microseconds" << endl;
}
