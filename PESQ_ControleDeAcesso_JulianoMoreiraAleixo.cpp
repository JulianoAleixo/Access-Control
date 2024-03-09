#include <iostream>

using namespace std;

int main() {
    int idList[20];
    int idToSearch;
    int listIndex = 0;
    int listValue;
    bool hasAccess = false;

    while(true) {
        cout << "Enter a value of the IDs list: " << endl;
        cin >> listValue;
        if(listValue == -1) {
            break;
        }
        idList[listIndex] = listValue;
        listIndex++;
    }

    cout << "Enter the ID to search: " << endl;
    cin >> idToSearch;

    int s = 0;
    int e = listIndex - 1;
    while (s < e) {
        int m = (s + e) / 2;
        if(idList[m] == idToSearch) {
            hasAccess = true;
            break;
        } else if (idList[m] < idToSearch) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    if (hasAccess) {
        cout << "Has Access!" << endl;
    } else {
        cout << "Does not have access!" << endl;
    }

    return 0;
}