#pragma once

class InvalidWithdrawException : public std::exception{

public:
        InvalidWithdrawException() noexcept = default;
        ~InvalidWithdrawException() = default;
        virtual const char* what() const noexcept{
            return "Insufficient funds - can't withdraw desired amount.";
        }


};
