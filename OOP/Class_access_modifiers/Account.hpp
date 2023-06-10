#pragma once

class Account 
{
    private:
        int balance{0};
    public:
        void withdraw (int cash);
        void deposite (int cash);
};