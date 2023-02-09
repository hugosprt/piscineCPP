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
    void MakeItSmall(std::string str);
    void GetContactSmall(int index);
    void FullList(void);
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