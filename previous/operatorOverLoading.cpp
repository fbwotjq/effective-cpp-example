class Person {
	int age;
public:
	Person(int input) { age = input; }
	int getAge() { return age; }
	Person & operator+=(const Person& rhs) {
		Person* p;
		//p = rhs;

	}
	Person& operator+ (const Person& rhs) {

	}

	Person& operator- (const Person& rhs) {

	}

	bool operator> (const Person& rhs) {

	}
};