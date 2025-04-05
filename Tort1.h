#ifndef TORT1_H_
#define TORT1_T_
#include <string>
using namespace std;

enum smaki{
			malina, truskawka, jablko, gruszka, pomarancza, czekolada, kawa, mango
		};

 class Tort
 {
	private:
		int nr;
		string nazwa;
        smaki tsmakow[30];
        int ilsm;
	public:
        static inline int count;
		Tort();
        Tort(int a);
        Tort(int a, string b);
        Tort(int a, string b,smaki s);
        ~Tort();





		void Add(smaki s);
		void Remove();
		bool IsFull();
		bool IsEmpty();
		void Clear();
		void Print();
        static void GetCount();
    

		
 };


#endif