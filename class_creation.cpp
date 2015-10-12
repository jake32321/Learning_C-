#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
	private:
		int age, standard;
		string first_name, last_name;
	public:
		void set_age(int a){
			age = a;
		}
		void set_standard(int s){
			standard = s;
		}
		void set_first_name(string first){
			first_name = first;
		}
		void set_last_name(string last){
			last_name = last;
		}
		int get_age(){
			return age;
		}
		string get_last_name(){
			return last_name; 
		}
		string get_first_name(){
			return first_name;
		}
		int get_standard(){
			return standard;
		}
		string to_string(){
			cout<<get_age()<<","<<get_first_name()<<","<<get_last_name()<<","<<get_standard();
			return " ";
		}
};

int main() {
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
