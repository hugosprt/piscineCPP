#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
class Contact
{

    public:
    Contact (void);
    ~Contact (void);
    void SetContact(void);
    void    GetInfo(void);
    void    GetContactSmall(int index);
    bool     exist(void);
    private:

    bool here;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
};




#endif