#include "List.h"

int main()
{
    List<int> myList;

    myList.AddToHead(10);
    myList.AddToTail(20);
    myList.AddToTail(30);

    myList.Show(); // 10 20 30

    myList.DeleteFromHead();
    myList.Show(); // 20 30

    myList.DeleteFromTail();
    myList.Show(); // 20

    myList.DeleteAll();
    myList.Show();

    return 0;
}