// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    if(balance < 0){
        return 3.213;
    } else if (balance > 5000 || balance == 5000){
        return 2.475;
    } else if (balance > 1000 || balance == 1000){
        return 1.621;
    }else if (balance > 0 || balance == 0){
        return 0.5;
    } else{
        return 0.0;
    }
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    return (interest_rate(balance)/100) * balance;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    double grown_balance{balance}; //money
    int years_result{0}; //years
    for (int i{0}; grown_balance < target_balance; i++){
        grown_balance = annual_balance_update(grown_balance);
        years_result = i + 1;
    }
    return years_result;
}
