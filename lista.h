/***Klasa do przechowywania intow w formie listy***/

#include <iostream>

using namespace std;

class List{

 private:
    int data;       //dane
    List * next;
    List * first = NULL;

 public:
    void add (int data);        //dodaje na poczatku
    void add_end (int data);    //dodaje na koncu listy
    void show();                //pokazuje cala liste
    void free_all();            //usuwa wszystkie
    void free_i(int data);      //nie dziala
};
