#pragma once 

class InsufficientBalanceException: public std::exception
{

public:
    InsufficientBalanceException() noexcept = default;
    ~InsufficientBalanceException() = default;
    virtual const char* what() const noexcept{
        return "Insufficient Initial Funds";
    }
};





 
