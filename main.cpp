#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string>listFromString(string line);

int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
vector<string>listFromString(string line)
{
        vector<string>word;
        for(int i=0; i<inventory.size(); i++)
        {
                if line[i]>"";
                {
}
                     
                

           
