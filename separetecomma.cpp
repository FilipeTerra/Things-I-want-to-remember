#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

int main() {
  
  string my_str, wday, day, month;

  cout << "Write date (week day,day,month)" << endl;
  getline (cin, my_str);
  cout << endl;
  
  vector<string> result;
  stringstream s_stream(my_str); // create string stream from the string
  
  while(s_stream.good()) {
    string substr;
    getline(s_stream, substr, ','); // get first string delimited by comma
    result.push_back(substr);
  }
  
  wday = result[0];  // designate each position to it's variable
  day = result[1];
  month = result[2];
  
  cout << wday << " " << day << " " << month << " " << endl;
  
  return 0;}
