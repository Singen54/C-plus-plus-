#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
int main(){
string x="###########";
fstream myfile;
myfile.open("test.txt",ios::app);
if(myfile.is_open()){myfile<<x+"\n"+"gggg"+"\n";}
return 0;
}
