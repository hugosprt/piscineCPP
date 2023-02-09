#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
class Contact
{

    public:
    Contact (void);
    ~Contact (void);
    void SetContact(void);
    void GetContactSmall(int index);
    void FullList(void);
    bool     exist(void);
    private:

    bool here;
    void MakeItSmall(std::string str);
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
};




#endif