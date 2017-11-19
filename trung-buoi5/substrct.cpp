#include<string>
#include<iostream>
 
using namespace std;
 
int main() {
    //Declare Variables
    int fnum[512] = {0};
    int snum[512] = {0};
    int sum[512] = {0};
    int diff[512] = {0};
    string first;
    string second;
 
 
    //Prompt user for first integer
    cout << "Please enter a positive whole number no larger than 512 digits long." << endl;
    cin >> first;
 
    if (first[0] == '-') {
        cout << "Your number must be positive.";
        return -1;
    }
 
    for (int i = 0; i < sizeof(first); i++) {
        fnum[sizeof(first) - i] = first[i];
    }
 
 
    //Prompt user for second integer
    cout << endl << "Please enter a positive whole number no larger than 512 digits long" << endl;
    cout << "AND is smaller than the first number." << endl;
    cin >> second;
    if (second[0] == '-') {
        cout << "Your number must be positive.";
        return -1;
    }
 
    for (int j = 0; j < sizeof(second); j++) {
        snum[sizeof(second) - j] = second[j];
    }
 
 
    //If second integer is larger than first return error
    if (first < second) {
        cout << "The second integer must be smaller than the first integer.";
        return -1;
    }
 
    //TEST: make sure input copied into string correctly
    cout << endl;
    cout << "Your first number is " << first << "." << endl;
    cout << "Your second number is " << second << "." << endl;
    cout << endl;
 
    //TEST: make sure string copied into array correctly
    cout << "first number is: ";
    for(int n = 0; n < sizeof(first); n++) {
        cout << fnum[n];
    }
 
    cout << endl << "second number is: ";
    for(int m = 0; m < sizeof(second); m++) {
        cout << snum[m];
    }
 
 
    //Display sum of two integers
    cout << endl;
    /*for(int s = 0; s < 513; s++) {
       if ((512 - s) == 0) {
          sum[512 - s] = fnum[512 - s] + snum[512 - s];
       }       
       sum[512 - s] = fnum[512 - s] + snum[512 - s];
       if (sum[512 - s] >= 10) {
          sum[512 - s] = sum[512 - s] - 10;
          sum[512 - s - 1] = sum[512 - s - 1] + 1;
       }
    }
    cout << first << " + " << second << " = ";
    for (int a = 0; a < 512; a++) {
        cout << sum[a];
    }*/
 
 
    //Display difference of two integers
    cout << endl;
 
    /*for(int d = 0; d < 513; d++) {
       diff[512 - d] = fnum[512 - d] - snum[512 - d];
       if (fnum[512 - d] > snum[512 - d]) {
          fnum[512 - d - 1] = fnum[512 - d - 1] - 1;
          fnum[512 - d] = fnum[512 - d] + 10;
       }
    }
    cout << first << " - " << second << " = ";
    for (int b = 0; b < 512; b++) {
        cout << diff[b];
    }
    cout << endl;*/
 
 
    //Pause and exit
    system("PAUSE");
    return 0;
}
