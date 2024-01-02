
class Customer
{
    private:
        int CreditCardNumber;
    public:
    int SetCreditCardNumber(int CreditCardNumber){
        this->CreditCardNumber;
    }
    int GetCreditCardNumber(){
        return CreditCardNumber;
    }
    int ChargeRate(int rate, int hour){
        int hourly_rate = rate * hour;
        return hourly_rate;
    }

};
