#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>
#include <stack>

using namespace std;

stack<char> st;
char s[11111];

int checkValidBracket(char s[]){
    int len = strlen(s);
    
    for (int i=0;i<len;i++){
        if ( s[i] == '(' )
            st.push(s[i]); // mo ngoac thi push vao stack
        else{
            // dong ngoac
            if ( st.empty() )
                return 0; // dong ngoac ma ko co mo ngoac
            // neu co mo ngoac thi vut ra
            st.pop();
        }
    }
    
    // check dau mo ngoac thua
    // if ( st.size() == 0 )
    if ( st.empty() )
        return 1;
    return 0;
}

void solve(){
    printf("%d\n",checkValidBracket(s));
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    while (scanf("%s",&s) > 0 ) {
        solve();
    }
}
