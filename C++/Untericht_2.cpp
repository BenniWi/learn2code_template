#include <iostream>
#include <cstdint>

/*// typedef struct {} MyCppStruct  -->  using
// normally you should not do it like this, prefere classes instead

using MyCppStruct = struct
{
    int16_t a = 0;
    float b = 0.0F;

    void print() const
    {
        std::cout << "a = " << a << "; b = " << b << std::endl;
    }
};

// C++ class looks like this
class MyCppClass
{
   public:  // C++ Access Specifiers
    int16_t a = 0;
    float b = 0.0F;

    void print() const
    {
        std::cout << "a = " << a << "; b = " << b << std::endl;
    }
};*/

class Student
{
    public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    std::string name; 
    //define a constructor
    Student(std::string par_name, int32_t par_id, int64_t account_num);
    void update_bank_account(const int64_t account_num);
    void print() const;
    
    private: 
    int64_t bank_account_number;
};
Student::Student(std::string par_name, int32_t par_id, int64_t account_num) : name{par_name}, bank_account_number{account_num}
{
    id_number = par_id;

}

void Student::update_bank_account(const int64_t account_num)
{
    bank_account_number= account_num;
}

void Student::print() const
{
    std::cout << name << std::endl;
    std::cout << id_number << std::endl;
    std::cout << num_of_exams << std::endl;
    std::cout << bank_account_number << std::endl;
    //Print code goes here
}

auto main() -> int
{
    Student Laura(std::string ("Laura"), 1909, 12345);
    Laura.update_bank_account (3333333);
    Laura.print();

}