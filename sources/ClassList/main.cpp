#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List list;
    list.put(5);
    list.put(6);
    list.put(7);
    list.put(5);
    cout << list.find(5) << endl;
    cout << list.rfind(5) << endl;
    list.erase(3);
    cout << list.rfind(5) << endl;
    try
    {
        //list.erase(5);
        list.find(10);
    }
    catch (NoItemException& e)
    {
        cout << "There is no item like \"" << e.getError() << "\"" << endl;
    }
    catch (BeyondTheLimitException& e)
    {
        cout << "There is not item with position " << e.getError() << endl;
    }

    return 0;
}

