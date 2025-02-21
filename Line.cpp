#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int x = 0; // عداد لعدد الأسطر
    string line; // لتخزين كل سطر مقروء

    // فتح الملف للقراءة
    ifstream myfile("test.txt");

    if (myfile.is_open()) {
        // قراءة الملف سطرًا بسطر
        while (getline(myfile, line)) {
            x++; // زيادة العداد لكل سطر
        }
        myfile.close(); // إغلاق الملف

        cout << "عدد الأسطر في الملف: " << x << endl;
    } else {
        cout << "فشل فتح الملف!" << endl;
    }

    return 0;
}
