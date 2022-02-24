#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int main() 
{
	string counter;
  ofstream MyFile("style.css");
  string content = "*{padding: 0;margin: 0;font-family: monospace;}body{text-align: center;}@media only screen and (max-width: 2001px) {h1:after{content: 'More than 2000';}}";
  for(int i=2000;i>0;i--){
  	stringstream ss;  
	ss<<i;    
	ss>>counter;
  	content += "@media only screen and (max-width: " + counter + "px) {h1:after{content: '" + counter + "';}}";
  }
  MyFile << content;
  MyFile.close();
}
