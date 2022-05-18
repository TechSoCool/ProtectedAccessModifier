
#include <iostream>
using namespace std;

class Parent {
protected:  int id_protected;
};

class Child : public Parent
{
				public: void setId(int id) {
						id_protected = id;
				}
					  void display_Id()
					  {
						  cout << "id_protected is: " << id_protected
					  }

};

int main() {



	return 0;
}