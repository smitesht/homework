#include <iostream>
#include <string>

using namespace std;

void salutation(string& strName, int type){
    if(type == 1){
        strName = "Hello " + strName;
    }
    else 
    {
        strName = "Hi " + strName;
    }
}

int main()
{
    string name = "Jhon";
    
    salutation(name,1);
    
    cout<<name<<endl;

    return 0;
}
