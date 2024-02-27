#include <iostream>
#include <stack>

int main() {
    // สร้าง stack เปล่า
    std::stack<int> myStack;

    // Push ตัวเลขเข้า stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // ดูข้อมูลที่อยู่ที่ด้านบนของ stack โดยไม่นำออก
    std::cout << "Top of the stack: " << myStack.top() << std::endl;

    // Pop ข้อมูลออกจาก stack
    myStack.pop();

    // ดูข้อมูลที่อยู่ที่ด้านบนของ stack หลังจาก pop
    std::cout << "Top of the stack after pop: " << myStack.top() << std::endl;

    // ตรวจสอบว่า stack ว่างหรือไม่
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // แสดงขนาดของ stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    return 0;
}
