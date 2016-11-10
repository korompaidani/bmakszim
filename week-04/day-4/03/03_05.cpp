#include <iostream>
#include <string>
using namespace std;

// Illustrating how constructors work when inheriting
// Write proper destructors for these classes.
// Play around with constructors.



class ParentClass {
	private:
		string* mParentString;
	public:
		//string* getStringAddress();
		ParentClass(string _str);
		string getText();
		virtual ~ParentClass();
};

ParentClass::ParentClass(string _str) {
	mParentString = new string(_str);
}

//string* ParentClass::getStringAddress() {
//	return mParentString;
//}

string ParentClass::getText() {
	return string(*mParentString);
}

ParentClass::~ParentClass() {
    delete mParentString;
}

class ChildClass : public ParentClass {
	private:
		string* mChildString;
	public:
		ChildClass(string _pstr, string _str);
		string getChildText();
		virtual ~ChildClass();
};

ChildClass::ChildClass(string _pstr, string _str) : ParentClass(_pstr) {
	mChildString = new string(_str);
}

string ChildClass::getChildText() {
	return string(*mChildString);
}

ChildClass::~ChildClass() {
    delete mChildString;
}

int main() {
	ChildClass* a = new ChildClass("text for parent", "child text");
	cout << a->getText() << "  ||  " << a->getChildText() << endl;
    //string* str = a->getStringAddress();
	delete a;
	//cout << *str;

}
