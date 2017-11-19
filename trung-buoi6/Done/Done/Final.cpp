// reading a text file
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int posOfEnd(string a) {
	int pos = 100;
	for (int i = 8; i < a.length(); i++)
		if (a[i] == '/')
		{
			pos = i ;
			break;
			
		}

	return pos;
}

int main () {
  string line;
  int numOfURL = 0;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    getline (myfile,line); 
    
      numOfURL = atoi(line.c_str());
      cout << numOfURL << endl;
    
    myfile.close();
  }
  
  else cout << "Unable to open file"; 
  
  string LinkWeb[numOfURL];
  int temp = 0;
  
  ifstream myfile1 ("example.txt");
  
  if (myfile1.is_open())
  {
    while ( getline (myfile1,line) )
    {
      LinkWeb[temp] = line ;
      temp++;
    }
    myfile1.close();
  }
  
	else cout << "Unable to open file"; 
	
	string tempDomain = "" ;
	
	ofstream outfile ("out.txt");
    if (outfile.is_open()) {
    	
    	for(int j=1; j < numOfURL+1; j++) {
    		tempDomain = LinkWeb[j].substr(0, posOfEnd(LinkWeb[j]));
    		tempDomain = tempDomain + "\n";
    		outfile << tempDomain;
    		
		}
		outfile.close();
	}	
  else cout << "Unable to write file";



	system("pause");	

  return 0;
}
