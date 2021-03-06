// Lecture3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Dictionary.h"
#include "KeyValue.h"
#include "Curve.h"
#include "Point.h"

using namespace std;

int main()
{
    cout << "Lecture 3!\n";

    Dictionary* dict = new Dictionary(10);
    dict->AddKeyValue(new KeyValue(1, 2));
    dict->AddKeyValue(new KeyValue(3, 6));
    dict->AddKeyValue(new KeyValue(2, 4));
    dict->AddKeyValue(new KeyValue(3, 8));

    double result = dict->GetValueByIndex(1);

    KeyValue* kv = dict->GetByKey(3);

    delete dict;

    Curve* c = new Curve(4);

    c->AddPoint(new Point(0, 0));
    c->AddPoint(new Point(0, 4));
    c->AddPoint(new Point(4, 4));
    c->AddPoint(new Point(4, 6));

    double distance = c->GetTotalDistance();

    cout << distance << endl;
}
