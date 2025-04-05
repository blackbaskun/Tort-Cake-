#include "Tort1.h"
#include <iostream>
#include <string>
using namespace std;


// /** @brief Tort.
// *
// * Jest to konstruktor czyli tworzy nowy obiekt.
// *
// * @param[in] nr tortu oraz jego nazwa.
// * @return void
// */
Tort::Tort(int a, string b){
    this->nr = a;
    this->nazwa = b;
    ilsm =0;
    this->count++;

}


// /** @brief Tort.
// *
// * Jest to konstruktor czyli tworzy nowy obiekt.
// *
// * @param[in] jak nie dajemy parametrow to nr domyslnie jest 0 a nazwa jest nieznana.
// * @return void
// */
Tort::Tort(){
     this->nr = 0;
     this->nazwa = "nieznany";
    ilsm =0;
    this->count++;
}



// /** @brief Tort.
// *
// * Jest to konstruktor czyli tworzy nowy obiekt.
// *
// * @param[in] nr tortu a nazwa jest nieznana..
// * @return void
// */
Tort::Tort(int a){
    this->nr = a;
    this->nazwa = "nieznany";
    ilsm = 0;
    this->count++;
}



// /** @brief Tort.
// *
// * Jest to konstruktor czyli tworzy nowy obiekt.
// *
// * @param[in] nr tortu, jego nazwa oraz smak.
// * @return void
// */
Tort::Tort(int a,string b,smaki s){
    this->nr = a;
    this->nazwa = b;
    this->tsmakow[0]=s;
    ilsm = 0;
    this->count++;
}



// /** @brief Tort.
// *
// * Jest to destruktor czyli usuwa obiekt i zmniejsza licznik.
// *
// * @param[in] -
// * @return void
// */
Tort::~Tort(){
    this->count--;
}




// /** @brief Add.
// *
// * Funkcja dodaje nowy smak.
// *
// * @param[in] smak jaki chcemy dodac.
// * @return void
// */
void Tort::Add(smaki s){
        if(!IsFull()){
            tsmakow[ilsm] = s;
            ilsm++;
        }
    

}



// /** @brief Remove.
// *
// * Funkcja dodaje nowy smak.
// *
// * @param[in] smak jaki chcemy dodac.
// * @return void
// */
void Tort::Remove(){
    ilsm--;

}



// /** @brief IsFull.
// *
// * Funkcja sprawdza czy lista smakow jest pelna.
// *
// * @param[in] -.
// * @return bool
// */
bool Tort::IsFull(){
    return ilsm==30;

}



// /** @brief IsEmpty.
// *
// * Funkcja sprawdza czy lista smakow jest pusta.
// *
// * @param[in] -.
// * @return bool
// */
bool Tort::IsEmpty(){
   return ilsm==0;
}



// /** @brief Clear.
// *
// * Funkcja usuwa smaki.
// *
// * @param[in] -.
// * @return void
// */
void Tort::Clear(){
    ilsm =0;

}



// /** @brief Print.
// *
// * Funkcja wypisuje wszystkie informacje o torcie.
// *
// * @param[in] -.
// * @return void
// */
void Tort::Print()
{
    cout<<"Nr przepisu "<<nr<<endl;
    cout<<"Nazwa przepisu "<<nazwa<<endl;
    cout<<"Liczba warstw w torcie "<<ilsm<<endl;
    cout<<"Lista smakow w torcie: ";

    for(int i = 0;i<ilsm;i++){
        cout<<tsmakow[i]<<", ";
    }
    cout<<endl;
}



// /** @brief GetCount.
// *
// * Funkcja zwraca liczbe tortow.
// *
// * @param[in] -.
// * @return void
// */
void Tort::GetCount(){
    cout<<"\nLiczba tortow: "<<count<<endl;
}

