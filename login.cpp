GNU nano 7.2                     login.cpp
#include <iostream>
#include "cgicc/Cgicc.h"
#include "cgicc/HTTPHTMLHeader.h"
#include "cgicc/HTMLClasses.h"
#include <map>
using namespace std;
using namespace cgicc;

int main() {
    Cgicc cgi;
    cout << HTTPHTMLHeader() << endl; // إرسال رأس HTTP
   if (cgi.getEnvironment().getRequestMethod() == "POST") {
    form_iterator name = cgi.getElement("name"); // استخراج الحقل مباشرة
    string n=**name;
    cout << "<html><body><h1>" <<n << "</h1></body></html>"; // طباعة الق>
    }else{cout<<"you can't login";}
    return 0;
}
