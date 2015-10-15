#include <iostream>
#include <sstream>
using namespace std;


class Student{  //Creates a new class of Student object.
	private:
		int age, standard;
		string first_name, last_name;
	public:
		void set_age(int a){ //Sets age
			age = a;
		}
		void set_standard(int s){ //Sets standard
			standard = s;
		}
		void set_first_name(string first){ //Sets first name
			first_name = first;
		}
		void set_last_name(string last){  //Sets last name
			last_name = last;
		}
		int get_age(){ //Retrieves age
			return age;
		}
		string get_last_name(){ //Retreives last name
			return last_name;
		}
		string get_first_name(){ //Retreives first name
			return first_name;
		}
		int get_standard(){ //Retreives standard
			return standard;
		}
		string to_string(){ //Retreives object specific information
			cout<<get_age()<<","<<get_first_name()<<","<<get_last_name()<<","<<get_standard();
			return " ";
		}
};

int main() { //Start of the main
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string();

	return 0;
}
