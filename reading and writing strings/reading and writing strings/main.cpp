//
//  main.cpp
//  reading and writing strings
//
//  Created by Nisha Ramprasath on 1/11/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[100];
    char s2[100];

    cout<<"enter ur name";
    cin.getline(s1,100);
    
    cout<<"welcome "<<s1<<endl;
    
    cout<<"enter ur name again";
    cin.getline(s1,100);
    
    cout<<"welcome "<<s2<<endl;
    
    return 0;
}
