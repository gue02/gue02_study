class Student {
    private:
        string name;
        int age;
    public:
    void set (string n, int a) {
        name = n;
        age = a;
    }
    void print (){
        cout << name << " " << age << endl;
    }
};