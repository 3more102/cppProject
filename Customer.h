#include <iostream>
#include "account.h"
using namespace std;

class CUSTOMER : public account
{
private:
    float balance;
public:
    CUSTOMER();
    float get_balance() const;
    void set_balance(float b);
};