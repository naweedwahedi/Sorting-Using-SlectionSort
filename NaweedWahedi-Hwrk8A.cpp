// Naweed Wahedi
// Homework-8A
// This program sorts array of strings
#include <iostream>
#include <string>
using namespace std;

//function prototypes
void selectionSort(string[], int);
void printArray(string[], int);

int main()
{
   const int num = 20;
   string name[num] =  {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                            "Griffin, Jim", "Stamey, Marty", "Rose, Geri","Taylor, Terri",
                             "Johnson, Jill","Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                             "James, Jean", "Weaver, Jim", "Pore, Bob","Rutherford, Greg", 
                             "Javens, Renee","Harrison, Rose", "Setzer, Cathy","Pike, Gordon", 
                             "Holland, Beth"};
   // display names befro sorting
   cout << "\n\tNaweed Wahedi's String Sorter" << endl;
   cout << "Names before sorting:" << endl << endl;
   printArray(name, num);

   //apply the sort
   selectionSort(name, num);

   //display names after sorting
   cout << "Names after sorting:" << endl << endl;
   printArray(name, num);
   cin.get();
   return 0;
}
void selectionSort(string strArray[], int size)
{
   int startScan, minIndex;
   string minValue;
   for (startScan = 0; startScan < (size - 1); startScan++)
   {
       minIndex = startScan;
       minValue = strArray[startScan];

       for (int index = startScan + 1; index < size; index++)
       {
           if (strArray[index].compare(minValue) < 0)
           {
               minValue = strArray[index];
               minIndex = index;
           }
       }
       strArray[minIndex] = strArray[startScan];
       strArray[startScan] = minValue;
   }
}
void printArray(string strArray[], int size)
{
   for (int index = 0; index < size; index++)
   {
       cout << strArray[index] << endl;
   }
   cout << endl;
}