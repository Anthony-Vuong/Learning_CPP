#pragma once


class MaxDepositsException : public std::exception{

public:
        MaxDepositsException() noexcept = default;
        ~MaxDepositsException() = default;
        virtual const char* what() const noexcept{
            return "Max deposits reeached for this year. Please talk to manager.";
        }


};
