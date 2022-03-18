#include <string>
#include <iostream>
using namespace std;


void FindLongestName1(string (&arr1)[3], string&LongestName1, int &length1){
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    length1=0;
    int indexOfLongestName1;
    for (int i = 0; i < size1;i++){
        if (arr1[i].length() > length1){
            length1=arr1[i].length();
            LongestName1=arr1[i];
            indexOfLongestName1=i;
        }
    }
}

void FindLongestName2(string (&arr2)[3], string&LongestName2, int &length2){
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    length2=0;
    int indexOfLongestName2;
    for (int i = 0; i < size2;i++){
        if (arr2[i].length() > length2){
            length2 = arr2[i].length();
            LongestName2 = arr2[i];
            indexOfLongestName2 = i;
        }
    }
}

void PrintLongestName(string LongestName1, string LongestName2, int length1, int length2){
    string LongestName;
    if (length1 > length2){
        LongestName = LongestName1;
    } else if (length1 < length2){
        LongestName = LongestName2;
    } else 
        LongestName = LongestName1 + LongestName2;
        cout << "The Longest Name is: " << LongestName;
}

int main(){
    string arr1[]={"Reem","Renad","Yasmeena"};
    string arr2[]={"Dana","Duaa","Esraa"};
    string LongestName1, LongestName2;
    int length1, length2;
    FindLongestName1(arr1, LongestName1, length1);
    FindLongestName2(arr2, LongestName2, length2);
    PrintLongestName(LongestName1, LongestName2, length1, length2);
    return 0;
}
