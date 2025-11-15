#pragma once

namespace lab1::date
{

struct Date
{
    // TODO: Your code
};

bool is_leap(int year);
int days_in_month(int year, int month);
bool is_valid(Date date);

int day_of_week(Date date);
int days_between(Date date1, Date date2);
Date add_days(Date date, int delta);

} // namespace lab1::date
