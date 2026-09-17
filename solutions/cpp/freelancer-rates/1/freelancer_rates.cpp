// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    double dailyRateFactor{8.0};
    return dailyRateFactor*hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    //todo check unit of the discount
    return ((100.0 - discount)*before_discount)/100.0;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    int numberOfBillableDays{22}; //days
    int monthlyRateRoundedUp = (int)(apply_discount(numberOfBillableDays * daily_rate(hourly_rate), discount) + 0.999999999);
    return monthlyRateRoundedUp;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    double dailyRateAfterDiscount{apply_discount(daily_rate(hourly_rate), discount)};
    return (int)(budget/dailyRateAfterDiscount);
}
